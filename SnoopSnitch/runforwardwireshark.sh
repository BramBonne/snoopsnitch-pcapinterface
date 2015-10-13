#!/bin/bash

adb shell am force-stop de.srlabs.snoopsnitch
adb forward tcp:9742 tcp:9742
adb shell am start -n de.srlabs.snoopsnitch/de.srlabs.snoopsnitch.StartupActivity
sleep 3
wireshark -k -i <(netcat 127.0.0.1 9742)
adb shell am force-stop de.srlabs.snoopsnitch
