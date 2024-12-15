meta:
	ADDON_NAME = ofxVST3
	ADDON_DESCRIPTION = VST3 for OpenFrameworks
	ADDON_AUTHOR = Stuart Barnes and Phil Potter
	ADDON_TAGS = "MIDI" "audio" "synthesis"
	ADDON_URL = http://github.com/<TODO>

common:
	# dependencies with other addons, a list of them separated by spaces 
	# or use += in several lines
	# ADDON_DEPENDENCIES =
	
	# include search paths, this will be usually parsed from the file system
	# but if the addon or addon libraries need special search paths they can be
	# specified here separated by spaces or one per line using +=
	# ADDON_INCLUDES =
	
	# any special flag that should be passed to the compiler when using this
	# addon
	# ADDON_CFLAGS =
	
	# any special flag that should be passed to the linker when using this
	# addon, also used for system libraries with -lname
	# ADDON_LDFLAGS =
	
	# linux only, any library that should be included in the project using
	# pkg-config
	# ADDON_PKG_CONFIG_LIBRARIES =
	
	# osx/iOS only, any framework that should be included in the project
	# ADDON_FRAMEWORKS =
	
	# source files, these will be usually parsed from the file system looking
	# in the src folders in libs and the root of the addon. if your addon needs
	# to include files in different places or a different set of files per platform
	# they can be specified here
	# ADDON_SOURCES =
	
	# some addons need resources to be copied to the bin/data folder of the project
	# specify here any files that need to be copied, you can use wildcards like * and ?
	# ADDON_DATA = 
	
	# when parsing the file system looking for libraries exclude this for all or
	# a specific platform
	# ADDON_LIBS_EXCLUDE =
	
	# when parsing the file system looking for sources exclude this for all or
	# a specific platform
	# ADDON_SOURCES_EXCLUDE = 
	
	# when parsing the file system looking for include paths exclude this for all or
	# a specific platform
	# ADDON_INCLUDES_EXCLUDE =
	ADDON_SOURCES += VST_SDK
	ADDON_INCLUDES += VST_SDK
	ADDON_INCLUDES += VST_SDK/build

	# DEVELOPMENT, RELEASE, _DEBUG, or NDEBUG must be defined for VST 
	# If you want debug, uncomment the libraries below and the debug flag
	ADDON_CFLAGS = -DRELEASE
	#ADDON_CFLAGS = -DDEBUG 	


linux64:
	# TODO

linux:
	# TODO

linuxarmv6l:
	# TODO

linuxarmv7l:
	# TODO

msys2: 
	# TODO
 
vs:
	# TODO

android/armeabi:
	# TODO

android/armeabi-v7a:
	# TODO

osx: 	

	ADDON_FRAMEWORKS = Cocoa

	ADDON_SOURCES += platform/editorhost/source/platform/mac/
	ADDON_INCLUDES += platform/editorhost/source/platform/mac
	ADDON_SOURCES += VST_SDK/public.sdk/source/vst/hosting/module_mac.mm
	ADDON_INCLUDES += VST_SDK/public.sdk/source/vst/hosting/module_mac.mm	

	ADDON_LIBS += VST_SDK/build/lib/Release/libbase.a
	ADDON_LIBS += VST_SDK/build/lib/Release/libpluginterfaces.a
	ADDON_LIBS += VST_SDK/build/lib/Release/libsdk.a
	ADDON_LIBS += VST_SDK/build/lib/Release/libsdk_common.a
	ADDON_LIBS += VST_SDK/build/lib/Release/libsdk_hosting.a




	
	# ADDON_LIBS += VST_SDK/build/lib/Release/libvstgui.a
	# ADDON_LIBS += VST_SDK/build/lib/Release/libvstgui_support.a
	# ADDON_LIBS += VST_SDK/build/lib/Release/libvstgui_uidescription.a

	# If doing a debug build:
	# ADDON_LIBS += VST_SDK/build/lib/Debug/libbase.a
	# ADDON_LIBS += VST_SDK/build/lib/Debug/libpluginterfaces.a
	# ADDON_LIBS += VST_SDK/build/lib/Debug/libsdk.a
	# ADDON_LIBS += VST_SDK/build/lib/Debug/libsdk_common.a
	# ADDON_LIBS += VST_SDK/build/lib/Debug/libsdk_hosting.a
	# ADDON_LIBS += VST_SDK/build/lib/Debug/libvstgui.a
	# ADDON_LIBS += VST_SDK/build/lib/Debug/libvstgui_support.a
	# ADDON_LIBS += VST_SDK/build/lib/Debug/libvstgui_uidescription.a

ios:

	# TODO
