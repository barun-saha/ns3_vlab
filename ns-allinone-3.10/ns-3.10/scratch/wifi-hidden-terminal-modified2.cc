/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2010 IITP RAS
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors: Pavel Boyko <boyko@iitp.ru>
 */

/*
 * Classical hidden terminal problem and its RTS/CTS solution.
 *
 * Topology: [node 0] <-- -50 dB --> [node 1] <-- -50 dB --> [node 2]
 * 
 * This example illustrates the use of 
 *  - Wifi in ad-hoc mode
 *  - Matrix propagation loss model
 *  - Use of OnOffApplication to generate CBR stream 
 *  - IP flow monitor
 */
#include "ns3/core-module.h"
#include "ns3/common-module.h"
#include "ns3/node-module.h"
#include "ns3/helper-module.h"
#include "ns3/mobility-module.h"
#include "ns3/flow-monitor-module.h"

#include "ns3/wifi-net-device.h"
#include "ns3/wifi-phy.h"
#include "ns3/yans-wifi-phy.h"

using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("Wifi-hidden-terminal-modified");

void
PrintInfo(NetDeviceContainer devices)
{
  //for (NetDeviceContainer::Iterator i = devices.Begin (); i != devices.End (); ++i) {
  Ptr< NetDevice>  i = devices.Get (1);
    Ptr<WifiNetDevice> wnd = DynamicCast<WifiNetDevice> (i);
    Ptr<WifiPhy> wp = wnd->GetPhy (); 
    Ptr<YansWifiPhy> yWifiPhy = wp->GetObject<YansWifiPhy> ();  
    std::cout << Simulator::Now () << yWifiPhy->GetRxGain ()  << ", " << yWifiPhy->GetEdThreshold () << ", "  << std::endl;
  //} 
}

void
PrintLocations (NodeContainer nodes, std::string header)
{
  std::cout << header << std::endl;
  for(NodeContainer::Iterator iNode = nodes.Begin (); iNode != nodes.End (); ++iNode)
  {
    Ptr<Node> object = *iNode;
    Ptr<MobilityModel> position = object->GetObject<MobilityModel> ();
    NS_ASSERT (position != 0);
    Vector pos = position->GetPosition ();
    std::cout << "(" << pos.x << ", " << pos.y << ", " << pos.z << ")" << std::endl;
  }
  std::cout << std::endl;
} 

/// Run single 10 seconds experiment with enabled or disabled RTS/CTS mechanism
void experiment (bool enableCtsRts, uint16_t iSimulationTime)
{
  double xDistance = 15.0;
  
  std::cout << "Hidden station experiment ["
            << "RTS/CTS enabled: " << enableCtsRts 
            << ", xDistance: " << xDistance
            << ", Simulation duration: " << iSimulationTime << "s" 
            << "]"
            << std::endl;
  
  // 0. Enable or disable CTS/RTS
  UintegerValue ctsThr = (enableCtsRts ? UintegerValue (100) : UintegerValue (2200));
  Config::SetDefault ("ns3::WifiRemoteStationManager::RtsCtsThreshold", ctsThr);
  //Config::SetDefault ("ns3::YansWifiPhy::EnergyDetectionThreshold", DoubleValue (-90.0));
  //Config::SetDefault ("ns3::YansWifiPhy::CcaMode1Threshold", DoubleValue(-90.0));
  
  // 1. Create 3 nodes 
  NodeContainer nodes;
  nodes.Create (3);
  
  // 2. Place nodes somehow, this is required by every wireless simulation  
  MobilityHelper mobility;
  mobility.SetPositionAllocator ("ns3::GridPositionAllocator",
                                 "MinX", DoubleValue (0.0),
                                 "MinY", DoubleValue (0.0),
                                 "DeltaX", DoubleValue (xDistance),
                                 "DeltaY", DoubleValue (10.0),
                                 "GridWidth", UintegerValue (3),
                                 "LayoutType", StringValue ("RowFirst"));
  mobility.SetMobilityModel ("ns3::ConstantPositionMobilityModel");
  mobility.Install (nodes);
  
  //PrintLocations (nodes, "Nodes position");
  
  // 3. Create propagation loss matrix
  // Loss is fixed irrespective of distance
  Ptr<MatrixPropagationLossModel> lossModel = CreateObject<MatrixPropagationLossModel> ();    
  lossModel->SetDefaultLoss (200); // set default loss to 200 dB (no link)
  lossModel->SetLoss (nodes.Get (0), nodes.Get (1), 50); // set symmetric loss 0 <-> 1 to 50 dB
  lossModel->SetLoss (nodes.Get (2), nodes.Get (1), 50); // set symmetric loss 2 <-> 1 to 50 dB

  // 4. Create & setup wifi channel
  Ptr<YansWifiChannel> wifiChannel = CreateObject <YansWifiChannel> ();
  wifiChannel->SetPropagationLossModel (lossModel);
  wifiChannel->SetPropagationDelayModel (CreateObject <ConstantSpeedPropagationDelayModel> ());
   
  // 5. Install wireless devices
  WifiHelper wifi;
  wifi.SetStandard (WIFI_PHY_STANDARD_80211b);
  wifi.SetRemoteStationManager ("ns3::ConstantRateWifiManager", 
                                "DataMode",StringValue ("DsssRate2Mbps"), 
                                "ControlMode",StringValue ("DsssRate1Mbps"));
  YansWifiPhyHelper wifiPhy =  YansWifiPhyHelper::Default ();
  wifiPhy.SetChannel (wifiChannel);
  NqosWifiMacHelper wifiMac = NqosWifiMacHelper::Default ();
  wifiMac.SetType ("ns3::AdhocWifiMac"); // use ad-hoc MAC
  NetDeviceContainer devices = wifi.Install (wifiPhy, wifiMac, nodes);

  // uncomment the following to have athstats output
  // AthstatsHelper athstats;
  // athstats.EnableAthstats(enableCtsRts ? "basic-athstats-node" : "rtscts-athstats-node", nodes);

  // uncomment the following to have pcap output
  //wifiPhy.EnablePcap (enableCtsRts ? "basic-pcap-node" : "rtscts-pcap-node", nodes);


  // 6. Install TCP/IP stack & assign IP addresses
  InternetStackHelper internet;
  internet.Install (nodes);
  Ipv4AddressHelper ipv4;
  ipv4.SetBase ("10.0.0.0", "255.0.0.0");
  ipv4.Assign (devices);
  
  // 7. Install applications: two CBR streams each saturating the channel 
  ApplicationContainer cbrApps;
  uint16_t cbrPort = 12345;
  OnOffHelper onOffHelper ("ns3::UdpSocketFactory", InetSocketAddress (Ipv4Address ("10.0.0.2"), cbrPort));
  onOffHelper.SetAttribute ("PacketSize", UintegerValue (200));
  onOffHelper.SetAttribute ("OnTime",  RandomVariableValue (ConstantVariable (1)));
  onOffHelper.SetAttribute ("OffTime", RandomVariableValue (ConstantVariable (0)));
  //onOffHelper.SetAttribute ("MaxBytes", UintegerValue (200));     // Total # of bytes to sent

  // flow 1:  node 0 -> node 1
  onOffHelper.SetAttribute ("DataRate", StringValue ("3000000bps"));
  onOffHelper.SetAttribute ("StartTime", TimeValue (Seconds (1.000000)));
  cbrApps.Add (onOffHelper.Install (nodes.Get (0))); 

  // flow 2:  node 2 -> node 1
  // The slightly different start times and data rates are a workround
  // for Bug 388 and Bug 912
  // http://www.nsnam.org/bugzilla/show_bug.cgi?id=912
  // http://www.nsnam.org/bugzilla/show_bug.cgi?id=388
  onOffHelper.SetAttribute ("DataRate", StringValue ("3001100bps"));
  onOffHelper.SetAttribute ("StartTime", TimeValue (Seconds (1.001)));
  cbrApps.Add (onOffHelper.Install (nodes.Get (2))); 

  // we also use separate UDP applications that will send a single
  // packet before the CBR flows start. 
  // This is a workround for the lack of perfect ARP, see Bug 187
  // http://www.nsnam.org/bugzilla/show_bug.cgi?id=187   

  uint16_t  echoPort = 9;
  UdpEchoClientHelper echoClientHelper (Ipv4Address ("10.0.0.2"), echoPort);
  echoClientHelper.SetAttribute ("MaxPackets", UintegerValue (1));
  echoClientHelper.SetAttribute ("Interval", TimeValue (Seconds (0.1)));
  echoClientHelper.SetAttribute ("PacketSize", UintegerValue (10));
  ApplicationContainer pingApps;
  
  // again using different start times to workaround Bug 388 and Bug 912
  echoClientHelper.SetAttribute ("StartTime", TimeValue (Seconds (0.001)));
  pingApps.Add (echoClientHelper.Install (nodes.Get (0))); 
  echoClientHelper.SetAttribute ("StartTime", TimeValue (Seconds (0.006)));
  pingApps.Add (echoClientHelper.Install (nodes.Get (2)));   



  
  // 8. Install FlowMonitor on all nodes to monitor the packets flowing  
  FlowMonitorHelper flowmon;
  Ptr<FlowMonitor> monitor = flowmon.InstallAll();

  for (uint8_t i = 2; i < iSimulationTime; i++)
    ;//Simulator::Schedule(Seconds (i), PrintInfo, devices);
      
    
  // 9. Run simulation for 10 seconds
  Simulator::Stop (Seconds (iSimulationTime));
  Simulator::Run ();
  

  // 10. Print per flow statistics
  
  monitor->CheckForLostPackets ();
  Ptr<Ipv4FlowClassifier> classifier = DynamicCast<Ipv4FlowClassifier> (flowmon.GetClassifier ());
  std::map<FlowId, FlowMonitor::FlowStats> stats = monitor->GetFlowStats ();
  for (std::map<FlowId, FlowMonitor::FlowStats>::const_iterator i = stats.begin (); i != stats.end (); ++i)
    {
      // first 2 FlowIds are for ECHO apps, we don't want to display them
      if (i->first > 2)
        {
          Ipv4FlowClassifier::FiveTuple t = classifier->FindFlow (i->first);
          std::cout << "Flow " << i->first - 2 << " (" << t.sourceAddress << " -> " << t.destinationAddress << ")\n";           
          std::cout << "  Tx Bytes:   " << i->second.txBytes << "\n";
          std::cout << "  Rx Bytes:   " << i->second.rxBytes << "\n";
          std::cout << "  Throughput: " << i->second.rxBytes * 8.0 / iSimulationTime / 1024 / 1024  << " Mbps\n";
        }
    }
  
  
  // 11. Cleanup
  Simulator::Destroy ();
}

int main (int argc, char **argv)
{
  //std::cout << "Hidden station experiment with RTS/CTS disabled:\n" << std::flush;

  //LogComponentEnable("InterferenceHelper", LOG_LEVEL_FUNCTION);
  LogComponentEnable("WifiRemoteStationManager", LOG_LEVEL_ALL);
  
  experiment (false, 20);     
  //experiment (true, 10);
  
  //std::cout << std::endl;
  //experiment (false, 50);   
  //experiment (true, 50);      
  
  return 0;
}
