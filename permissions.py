#!/bin/bash

#echo "Setting group for ns-allinone-3.10/ns-3.10 ..."
sudo chgrp -R www-data ns-allinone-3.10/ns-3.10
#echo "Setting write permissions for ns-allinone-3.10/ns-3.10 ..."
sudo chmod -R g+w ns-allinone-3.10/ns-3.10
