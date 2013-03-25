

/* http://www.nsnam.org/bugzilla/show_bug.cgi?id=413 */
#ifdef ECHO
# undef ECHO
#endif

    
#include "ns3/aarf-wifi-manager.h"
#include "ns3/aarfcd-wifi-manager.h"
#include "ns3/abort.h"
#include "ns3/acoustic-modem-energy-model-helper.h"
#include "ns3/acoustic-modem-energy-model.h"
#include "ns3/address-utils.h"
#include "ns3/address.h"
#include "ns3/adhoc-aloha-noack-ideal-phy-helper.h"
#include "ns3/adhoc-wifi-mac.h"
#include "ns3/aloha-noack-mac-header.h"
#include "ns3/aloha-noack-net-device.h"
#include "ns3/amc-module.h"
#include "ns3/amrr-wifi-manager.h"
#include "ns3/amsdu-subframe-header.h"
#include "ns3/animation-interface.h"
#include "ns3/aodv-dpd.h"
#include "ns3/aodv-helper.h"
#include "ns3/aodv-id-cache.h"
#include "ns3/aodv-neighbor.h"
#include "ns3/aodv-packet.h"
#include "ns3/aodv-routing-protocol.h"
#include "ns3/aodv-rqueue.h"
#include "ns3/aodv-rtable.h"
#include "ns3/ap-wifi-mac.h"
#include "ns3/application-container.h"
#include "ns3/application.h"
#include "ns3/arf-wifi-manager.h"
#include "ns3/arp-cache.h"
#include "ns3/arp-header.h"
#include "ns3/arp-l3-protocol.h"
#include "ns3/assert.h"
#include "ns3/athstats-helper.h"
#include "ns3/attribute-accessor-helper.h"
#include "ns3/attribute-helper.h"
#include "ns3/attribute-list.h"
#include "ns3/attribute.h"
#include "ns3/average.h"
#include "ns3/backoff.h"
#include "ns3/basic-data-calculators.h"
#include "ns3/basic-energy-source-helper.h"
#include "ns3/basic-energy-source.h"
#include "ns3/bearer-qos-parameters.h"
#include "ns3/block-ack-agreement.h"
#include "ns3/block-ack-cache.h"
#include "ns3/block-ack-manager.h"
#include "ns3/boolean.h"
#include "ns3/box.h"
#include "ns3/breakpoint.h"
#include "ns3/bridge-channel.h"
#include "ns3/bridge-helper.h"
#include "ns3/bridge-net-device.h"
#include "ns3/bs-net-device.h"
#include "ns3/bs-scheduler-rtps.h"
#include "ns3/bs-scheduler-simple.h"
#include "ns3/bs-scheduler.h"
#include "ns3/bs-service-flow-manager.h"
#include "ns3/bs-uplink-scheduler-mbqos.h"
#include "ns3/bs-uplink-scheduler-rtps.h"
#include "ns3/bs-uplink-scheduler-simple.h"
#include "ns3/bs-uplink-scheduler.h"
#include "ns3/buffer.h"
#include "ns3/bulk-send-application.h"
#include "ns3/bulk-send-helper.h"
#include "ns3/bvec.h"
#include "ns3/byte-tag-list.h"
#include "ns3/cairo-wideint-private.h"
#include "ns3/calendar-scheduler.h"
#include "ns3/callback.h"
#include "ns3/canvas-location.h"
#include "ns3/capability-information.h"
#include "ns3/cara-wifi-manager.h"
#include "ns3/channel-list.h"
#include "ns3/channel-realization.h"
#include "ns3/channel.h"
#include "ns3/chunk.h"
#include "ns3/cid-factory.h"
#include "ns3/cid.h"
#include "ns3/command-line.h"
#include "ns3/config-store.h"
#include "ns3/config.h"
#include "ns3/connection-manager.h"
#include "ns3/constant-acceleration-mobility-model.h"
#include "ns3/constant-position-mobility-model.h"
#include "ns3/constant-rate-wifi-manager.h"
#include "ns3/constant-velocity-helper.h"
#include "ns3/constant-velocity-mobility-model.h"
#include "ns3/cost231-propagation-loss-model.h"
#include "ns3/crc8.h"
#include "ns3/cs-parameters.h"
#include "ns3/csma-channel.h"
#include "ns3/csma-helper.h"
#include "ns3/csma-net-device.h"
#include "ns3/csma-star-helper.h"
#include "ns3/ctrl-headers.h"
#include "ns3/data-calculator.h"
#include "ns3/data-collector.h"
#include "ns3/data-output-interface.h"
#include "ns3/data-rate.h"
#include "ns3/dca-txop.h"
#include "ns3/dcf-manager.h"
#include "ns3/dcf.h"
#include "ns3/default-deleter.h"
#include "ns3/default-simulator-impl.h"
#include "ns3/delay-jitter-estimation.h"
#include "ns3/deprecated.h"
#include "ns3/device-energy-model-container.h"
#include "ns3/device-energy-model.h"
#include "ns3/discrete-time-loss-model.h"
#include "ns3/distributed-simulator-impl.h"
#include "ns3/dl-mac-messages.h"
#include "ns3/dot11s-installer.h"
#include "ns3/double.h"
#include "ns3/drop-tail-queue.h"
#include "ns3/dsdv-helper.h"
#include "ns3/dsdv-packet-queue.h"
#include "ns3/dsdv-packet.h"
#include "ns3/dsdv-routing-protocol.h"
#include "ns3/dsdv-rtable.h"
#include "ns3/dsss-error-rate-model.h"
#include "ns3/edca-txop-n.h"
#include "ns3/empty.h"
#include "ns3/emu-helper.h"
#include "ns3/emu-net-device.h"
#include "ns3/emu.h"
#include "ns3/enb-lte-spectrum-phy.h"
#include "ns3/enb-mac-entity.h"
#include "ns3/enb-net-device.h"
#include "ns3/enb-phy.h"
#include "ns3/energy-model-helper.h"
#include "ns3/energy-source-container.h"
#include "ns3/energy-source.h"
#include "ns3/enum.h"
#include "ns3/error-model.h"
#include "ns3/error-rate-model.h"
#include "ns3/ethernet-header.h"
#include "ns3/ethernet-trailer.h"
#include "ns3/event-garbage-collector.h"
#include "ns3/event-id.h"
#include "ns3/event-impl.h"
#include "ns3/fatal-error.h"
#include "ns3/fatal-impl.h"
#include "ns3/file-config.h"
#include "ns3/flame-installer.h"
#include "ns3/flame-protocol.h"
#include "ns3/flow-classifier.h"
#include "ns3/flow-id-tag.h"
#include "ns3/flow-monitor-helper.h"
#include "ns3/flow-monitor.h"
#include "ns3/flow-probe.h"
#include "ns3/friis-spectrum-propagation-loss.h"
#include "ns3/gauss-markov-mobility-model.h"
#include "ns3/global-route-manager.h"
#include "ns3/global-router-interface.h"
#include "ns3/global-value.h"
#include "ns3/gnuplot.h"
#include "ns3/gtk-config-store.h"
#include "ns3/half-duplex-ideal-phy.h"
#include "ns3/header.h"
#include "ns3/heap-scheduler.h"
#include "ns3/hierarchical-mobility-model.h"
#include "ns3/high-precision-cairo.h"
#include "ns3/high-precision.h"
#include "ns3/histogram.h"
#include "ns3/hwmp-protocol.h"
#include "ns3/icmpv4-l4-protocol.h"
#include "ns3/icmpv4.h"
#include "ns3/icmpv6-header.h"
#include "ns3/icmpv6-l4-protocol.h"
#include "ns3/ideal-control-messages.h"
#include "ns3/ideal-wifi-manager.h"
#include "ns3/ie-dot11s-beacon-timing.h"
#include "ns3/ie-dot11s-configuration.h"
#include "ns3/ie-dot11s-id.h"
#include "ns3/ie-dot11s-peer-management.h"
#include "ns3/inet-socket-address.h"
#include "ns3/inet-topology-reader.h"
#include "ns3/inet6-socket-address.h"
#include "ns3/int-to-type.h"
#include "ns3/integer.h"
#include "ns3/interference-helper.h"
#include "ns3/internet-stack-helper.h"
#include "ns3/ipcs-classifier-record.h"
#include "ns3/ipcs-classifier.h"
#include "ns3/ipv4-address-generator.h"
#include "ns3/ipv4-address-helper.h"
#include "ns3/ipv4-address.h"
#include "ns3/ipv4-flow-classifier.h"
#include "ns3/ipv4-flow-probe.h"
#include "ns3/ipv4-global-routing-helper.h"
#include "ns3/ipv4-global-routing.h"
#include "ns3/ipv4-header.h"
#include "ns3/ipv4-interface-address.h"
#include "ns3/ipv4-interface-container.h"
#include "ns3/ipv4-interface.h"
#include "ns3/ipv4-l3-protocol.h"
#include "ns3/ipv4-l4-protocol.h"
#include "ns3/ipv4-list-routing-helper.h"
#include "ns3/ipv4-list-routing.h"
#include "ns3/ipv4-nix-vector-helper.h"
#include "ns3/ipv4-nix-vector-routing.h"
#include "ns3/ipv4-packet-info-tag.h"
#include "ns3/ipv4-raw-socket-factory.h"
#include "ns3/ipv4-route.h"
#include "ns3/ipv4-routing-helper.h"
#include "ns3/ipv4-routing-protocol.h"
#include "ns3/ipv4-routing-table-entry.h"
#include "ns3/ipv4-static-routing-helper.h"
#include "ns3/ipv4-static-routing.h"
#include "ns3/ipv4.h"
#include "ns3/ipv6-address-helper.h"
#include "ns3/ipv6-address.h"
#include "ns3/ipv6-extension-header.h"
#include "ns3/ipv6-header.h"
#include "ns3/ipv6-interface-address.h"
#include "ns3/ipv6-interface-container.h"
#include "ns3/ipv6-interface.h"
#include "ns3/ipv6-l3-protocol.h"
#include "ns3/ipv6-l4-protocol.h"
#include "ns3/ipv6-list-routing-helper.h"
#include "ns3/ipv6-list-routing.h"
#include "ns3/ipv6-option-header.h"
#include "ns3/ipv6-packet-info-tag.h"
#include "ns3/ipv6-raw-socket-factory.h"
#include "ns3/ipv6-route.h"
#include "ns3/ipv6-routing-helper.h"
#include "ns3/ipv6-routing-protocol.h"
#include "ns3/ipv6-routing-table-entry.h"
#include "ns3/ipv6-static-routing-helper.h"
#include "ns3/ipv6-static-routing.h"
#include "ns3/ipv6.h"
#include "ns3/jakes-fading-loss-model.h"
#include "ns3/jakes-propagation-loss-model.h"
#include "ns3/li-ion-energy-source.h"
#include "ns3/list-scheduler.h"
#include "ns3/llc-snap-header.h"
#include "ns3/log.h"
#include "ns3/loopback-net-device.h"
#include "ns3/lte-helper.h"
#include "ns3/lte-mac-header.h"
#include "ns3/lte-mac-queue.h"
#include "ns3/lte-net-device.h"
#include "ns3/lte-phy.h"
#include "ns3/lte-propagation-loss-model.h"
#include "ns3/lte-spectrum-phy.h"
#include "ns3/lte-spectrum-value-helper.h"
#include "ns3/mac-entity.h"
#include "ns3/mac-low.h"
#include "ns3/mac-messages.h"
#include "ns3/mac-rx-middle.h"
#include "ns3/mac48-address.h"
#include "ns3/mac64-address.h"
#include "ns3/make-event.h"
#include "ns3/map-scheduler.h"
#include "ns3/mesh-helper.h"
#include "ns3/mesh-information-element-vector.h"
#include "ns3/mesh-information-element.h"
#include "ns3/mesh-l2-routing-protocol.h"
#include "ns3/mesh-point-device.h"
#include "ns3/mesh-stack-installer.h"
#include "ns3/mesh-wifi-beacon.h"
#include "ns3/mesh-wifi-interface-mac-plugin.h"
#include "ns3/mesh-wifi-interface-mac.h"
#include "ns3/mgt-headers.h"
#include "ns3/microwave-oven-spectrum-value-helper.h"
#include "ns3/minstrel-wifi-manager.h"
#include "ns3/mobility-helper.h"
#include "ns3/mobility-model.h"
#include "ns3/mpi-interface.h"
#include "ns3/msdu-aggregator.h"
#include "ns3/multi-model-spectrum-channel.h"
#include "ns3/names.h"
#include "ns3/ndisc-cache.h"
#include "ns3/net-device-container.h"
#include "ns3/net-device.h"
#include "ns3/nist-error-rate-model.h"
#include "ns3/nix-vector.h"
#include "ns3/node-container.h"
#include "ns3/node-list.h"
#include "ns3/node.h"
#include "ns3/non-communicating-net-device.h"
#include "ns3/nqos-wifi-mac-helper.h"
#include "ns3/ns2-calendar-scheduler.h"
#include "ns3/ns2-mobility-helper.h"
#include "ns3/ns3tcp.h"
#include "ns3/ns3wifi.h"
#include "ns3/nsc-tcp-l4-protocol.h"
#include "ns3/nstime.h"
#include "ns3/object-base.h"
#include "ns3/object-factory.h"
#include "ns3/object-vector.h"
#include "ns3/object.h"
#include "ns3/ofdm-downlink-frame-prefix.h"
#include "ns3/olsr-header.h"
#include "ns3/olsr-helper.h"
#include "ns3/olsr-repositories.h"
#include "ns3/olsr-routing-protocol.h"
#include "ns3/olsr-state.h"
#include "ns3/omnet-data-output.h"
#include "ns3/on-off-helper.h"
#include "ns3/onoe-wifi-manager.h"
#include "ns3/onoff-application.h"
#include "ns3/orbis-topology-reader.h"
#include "ns3/originator-block-ack-agreement.h"
#include "ns3/output-stream-wrapper.h"
#include "ns3/packet-burst.h"
#include "ns3/packet-data-calculators.h"
#include "ns3/packet-loss-counter.h"
#include "ns3/packet-metadata.h"
#include "ns3/packet-scheduler.h"
#include "ns3/packet-sink-helper.h"
#include "ns3/packet-sink.h"
#include "ns3/packet-socket-address.h"
#include "ns3/packet-socket-factory.h"
#include "ns3/packet-socket-helper.h"
#include "ns3/packet-tag-list.h"
#include "ns3/packet.h"
#include "ns3/packetbb.h"
#include "ns3/path-loss-model.h"
#include "ns3/pcap-file-wrapper.h"
#include "ns3/pcap-file.h"
#include "ns3/peer-link.h"
#include "ns3/peer-management-protocol.h"
#include "ns3/penetration-loss-model.h"
#include "ns3/phy-mac.h"
#include "ns3/ping6-helper.h"
#include "ns3/ping6.h"
#include "ns3/point-to-point-channel.h"
#include "ns3/point-to-point-dumbbell-helper.h"
#include "ns3/point-to-point-grid-helper.h"
#include "ns3/point-to-point-helper.h"
#include "ns3/point-to-point-net-device.h"
#include "ns3/point-to-point-remote-channel.h"
#include "ns3/point-to-point-star-helper.h"
#include "ns3/pointer.h"
#include "ns3/position-allocator.h"
#include "ns3/ppp-header.h"
#include "ns3/propagation-delay-model.h"
#include "ns3/propagation-loss-model.h"
#include "ns3/ptr.h"
#include "ns3/pyviz.h"
#include "ns3/qos-tag.h"
#include "ns3/qos-utils.h"
#include "ns3/qos-wifi-mac-helper.h"
#include "ns3/queue.h"
#include "ns3/radio-bearer-instance.h"
#include "ns3/radiotap-header.h"
#include "ns3/radvd-interface.h"
#include "ns3/radvd-prefix.h"
#include "ns3/radvd.h"
#include "ns3/random-direction-2d-mobility-model.h"
#include "ns3/random-variable.h"
#include "ns3/random-walk-2d-mobility-model.h"
#include "ns3/random-waypoint-mobility-model.h"
#include "ns3/realtime-simulator-impl.h"
#include "ns3/rectangle.h"
#include "ns3/ref-count-base.h"
#include "ns3/regular-wifi-mac.h"
#include "ns3/rlc-entity.h"
#include "ns3/rng-stream.h"
#include "ns3/rocketfuel-topology-reader.h"
#include "ns3/rraa-wifi-manager.h"
#include "ns3/rrc-entity.h"
#include "ns3/rv-battery-model-helper.h"
#include "ns3/rv-battery-model.h"
#include "ns3/scheduler.h"
#include "ns3/send-params.h"
#include "ns3/sequence-number.h"
#include "ns3/service-flow-manager.h"
#include "ns3/service-flow-record.h"
#include "ns3/service-flow.h"
#include "ns3/sgi-hashmap.h"
#include "ns3/shadowing-loss-model.h"
#include "ns3/simple-channel.h"
#include "ns3/simple-device-energy-model.h"
#include "ns3/simple-net-device.h"
#include "ns3/simple-ofdm-send-param.h"
#include "ns3/simple-ofdm-wimax-channel.h"
#include "ns3/simple-ofdm-wimax-phy.h"
#include "ns3/simple-packet-scheduler.h"
#include "ns3/simple-ref-count.h"
#include "ns3/simulation-singleton.h"
#include "ns3/simulator-impl.h"
#include "ns3/simulator.h"
#include "ns3/single-model-spectrum-channel.h"
#include "ns3/snr-to-block-error-rate-manager.h"
#include "ns3/snr-to-block-error-rate-record.h"
#include "ns3/socket-factory.h"
#include "ns3/socket.h"
#include "ns3/spectrum-analyzer-helper.h"
#include "ns3/spectrum-analyzer.h"
#include "ns3/spectrum-channel.h"
#include "ns3/spectrum-converter.h"
#include "ns3/spectrum-error-model.h"
#include "ns3/spectrum-helper.h"
#include "ns3/spectrum-interference.h"
#include "ns3/spectrum-model-300kHz-300GHz-log.h"
#include "ns3/spectrum-model-ism2400MHz-res1MHz.h"
#include "ns3/spectrum-model.h"
#include "ns3/spectrum-phy.h"
#include "ns3/spectrum-propagation-loss-model.h"
#include "ns3/spectrum-type.h"
#include "ns3/spectrum-value.h"
#include "ns3/ss-manager.h"
#include "ns3/ss-net-device.h"
#include "ns3/ss-record.h"
#include "ns3/ss-service-flow-manager.h"
#include "ns3/ssid.h"
#include "ns3/sta-wifi-mac.h"
#include "ns3/status-code.h"
#include "ns3/steady-state-random-waypoint-mobility-model.h"
#include "ns3/string.h"
#include "ns3/supported-rates.h"
#include "ns3/synchronizer.h"
#include "ns3/system-condition.h"
#include "ns3/system-mutex.h"
#include "ns3/system-thread.h"
#include "ns3/system-wall-clock-ms.h"
#include "ns3/tag-buffer.h"
#include "ns3/tag.h"
#include "ns3/tap-bridge-helper.h"
#include "ns3/tap-bridge.h"
#include "ns3/tap.h"
#include "ns3/tcp-header.h"
#include "ns3/tcp-l4-protocol.h"
#include "ns3/tcp-socket-factory.h"
#include "ns3/tcp-socket.h"
#include "ns3/test.h"
#include "ns3/time-base.h"
#include "ns3/time-data-calculators.h"
#include "ns3/timer-impl.h"
#include "ns3/timer.h"
#include "ns3/topology-reader-helper.h"
#include "ns3/topology-reader.h"
#include "ns3/trace-helper.h"
#include "ns3/trace-source-accessor.h"
#include "ns3/traced-callback.h"
#include "ns3/traced-value.h"
#include "ns3/trailer.h"
#include "ns3/type-id.h"
#include "ns3/type-name.h"
#include "ns3/type-traits.h"
#include "ns3/uan-address.h"
#include "ns3/uan-channel.h"
#include "ns3/uan-header-common.h"
#include "ns3/uan-header-rc.h"
#include "ns3/uan-helper.h"
#include "ns3/uan-mac-aloha.h"
#include "ns3/uan-mac-cw.h"
#include "ns3/uan-mac-rc-gw.h"
#include "ns3/uan-mac-rc.h"
#include "ns3/uan-mac.h"
#include "ns3/uan-net-device.h"
#include "ns3/uan-noise-model-default.h"
#include "ns3/uan-noise-model.h"
#include "ns3/uan-phy-dual.h"
#include "ns3/uan-phy-gen.h"
#include "ns3/uan-phy.h"
#include "ns3/uan-prop-model-ideal.h"
#include "ns3/uan-prop-model-thorp.h"
#include "ns3/uan-prop-model.h"
#include "ns3/uan-transducer-hd.h"
#include "ns3/uan-transducer.h"
#include "ns3/uan-tx-mode.h"
#include "ns3/udp-client-server-helper.h"
#include "ns3/udp-client.h"
#include "ns3/udp-echo-client.h"
#include "ns3/udp-echo-helper.h"
#include "ns3/udp-echo-server.h"
#include "ns3/udp-header.h"
#include "ns3/udp-l4-protocol.h"
#include "ns3/udp-server.h"
#include "ns3/udp-socket-factory.h"
#include "ns3/udp-socket.h"
#include "ns3/udp-trace-client.h"
#include "ns3/ue-lte-spectrum-phy.h"
#include "ns3/ue-mac-entity.h"
#include "ns3/ue-manager.h"
#include "ns3/ue-net-device.h"
#include "ns3/ue-phy.h"
#include "ns3/ue-record.h"
#include "ns3/uinteger.h"
#include "ns3/ul-job.h"
#include "ns3/ul-mac-messages.h"
#include "ns3/unix-fd-reader.h"
#include "ns3/v4ping-helper.h"
#include "ns3/v4ping.h"
#include "ns3/vector.h"
#include "ns3/virtual-net-device.h"
#include "ns3/wall-clock-synchronizer.h"
#include "ns3/watchdog.h"
#include "ns3/waveform-generator-helper.h"
#include "ns3/waveform-generator.h"
#include "ns3/waypoint-mobility-model.h"
#include "ns3/waypoint.h"
#include "ns3/wifi-channel.h"
#include "ns3/wifi-helper.h"
#include "ns3/wifi-information-element-vector.h"
#include "ns3/wifi-information-element.h"
#include "ns3/wifi-mac-header.h"
#include "ns3/wifi-mac.h"
#include "ns3/wifi-mode.h"
#include "ns3/wifi-net-device.h"
#include "ns3/wifi-phy-standard.h"
#include "ns3/wifi-phy.h"
#include "ns3/wifi-phy.h"
#include "ns3/wifi-preamble.h"
#include "ns3/wifi-radio-energy-model-helper.h"
#include "ns3/wifi-radio-energy-model.h"
#include "ns3/wifi-remote-station-manager.h"
#include "ns3/wifi-spectrum-value-helper.h"
#include "ns3/wimax-channel.h"
#include "ns3/wimax-connection.h"
#include "ns3/wimax-helper.h"
#include "ns3/wimax-mac-header.h"
#include "ns3/wimax-mac-queue.h"
#include "ns3/wimax-mac-to-mac-header.h"
#include "ns3/wimax-net-device.h"
#include "ns3/wimax-phy.h"
#include "ns3/wimax-tlv.h"
#include "ns3/yans-error-rate-model.h"
#include "ns3/yans-wifi-channel.h"
#include "ns3/yans-wifi-helper.h"
#include "ns3/yans-wifi-phy.h"

namespace ns3 {
static inline Ptr<Object>
__dummy_function_to_force_template_instantiation (Ptr<Object> obj, TypeId typeId)
{
   return obj->GetObject<Object> (typeId);
}


static inline void
__dummy_function_to_force_template_instantiation_v2 ()
{
   Time t1, t2, t3;
   t1 = t2 + t3;
   t1 = t2 - t3;
   TimeSquare tsq = t2*t3;
   Time tsqdiv = tsq/Seconds(1);
   Scalar scal = t2/t3;
   TimeInvert inv = scal/t3;
   t1 = scal*t1;
   t1 = t1/scal;
   t1 < t2;
   t1 <= t2;
   t1 == t2;
   t1 != t2;
   t1 >= t2;
   t1 > t2;
}


}

