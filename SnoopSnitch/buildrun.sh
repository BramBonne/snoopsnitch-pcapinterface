ant debug;
adb shell am start -n de.srlabs.snoopsnitch/de.srlabs.snoopsnitch.StartupActivity;
adb logcat -s msd-service;
