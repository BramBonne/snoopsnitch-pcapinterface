rm bin/*.apk
ant debug && adb install -r bin/SnoopSnitch-debug.apk && adb shell am start -n de.srlabs.snoopsnitch/de.srlabs.snoopsnitch.StartupActivity && adb logcat -s msd-service
