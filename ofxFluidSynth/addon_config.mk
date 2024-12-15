meta:
	ADDON_NAME = ofxFluidSynth
	ADDON_DESCRIPTION = FluidSynth for OpenFrameworks
	ADDON_AUTHOR = Stuart Barnes
	ADDON_TAGS = "FluidSynth" "MIDI" "audio" "synthesis"
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
	ADDON_INCLUDES += src/

linux64:
	ADDON_INCLUDES += libs/fluidsynth/include/%	
	ADDON_PKG_CONFIG_LIBRARIES = alsa
	ADDON_LIBS+=libs/lib/linux64/libfluidsynth.so.2


linux:
	ADDON_INCLUDES += libs/fluidsynth/include/%	
	ADDON_PKG_CONFIG_LIBRARIES = alsa
	ADDON_LIBS+=libs/lib/linux64/libfluidsynth.so.2

linuxarmv6l:
	ADDON_INCLUDES += libs/fluidsynth/include/%	
	ADDON_PKG_CONFIG_LIBRARIES = alsa
	ADDON_LIBS+=libs/lib/linux64/libfluidsynth.so.2

linuxarmv7l:
	ADDON_INCLUDES += libs/fluidsynth/include/%	
	ADDON_PKG_CONFIG_LIBRARIES = alsa
	ADDON_LIBS+=libs/lib/linux64/libfluidsynth.so.2

msys2: 
	# /mingw32/bin/g++   or /mingw64/bin/g++    : 32 vs 64 bit compilation: check which compiler you're using and change below paths accordingly!!
	ADDON_SOURCES_EXCLUDE += libs/fluidsynth/include/%
	ADDON_LIBS+=libs/lib/win32/libfluidsynth.dll.a
#	ADDON_LIBS+=libs/lib/win64/libgio-2.0.dll.a
#	ADDON_LIBS+=libs/lib/win64/libglib-2.0.dll.a
#	ADDON_LIBS+=libs/lib/win64/libgmodule-2.0.dll.a
#	ADDON_LIBS+=libs/lib/win64/libgobject-2.0.dll.a
#	ADDON_LIBS+=libs/lib/win64/libgthread-2.0.dll.a
#	ADDON_LIBS+=libs/lib/win64/libintl.a
#	ADDON_LIBS+=libs/lib/win64/libsndfile.a
 

 
vs:
	ADDON_SOURCES_EXCLUDE += libs/fluidsynth/include/%
	ADDON_LIBS+=libs/lib/win64/libfluidsynth-2.dll
#	ADDON_LIBS+=libs/lib/win64/libgio-2.0-0.dll
#	ADDON_LIBS+=libs/lib/win64/libglib-2.0-0.dll
#	ADDON_LIBS+=libs/lib/win64/libgmodule-2.0-0.dll
#	ADDON_LIBS+=libs/lib/win64/libgobject-2.0-0.dll
#	ADDON_LIBS+=libs/lib/win64/libgthread-2.0-0.dll
#	ADDON_LIBS+=libs/lib/win64/libintl.dll
#	ADDON_LIBS+=libs/lib/win64/libsndfile-1.dll

android/armeabi:

android/armeabi-v7a:

osx: 
	# osx/iOS only
	ADDON_INCLUDES += libs/fluidsynth/include/%		
	ADDON_FRAMEWORKS = CoreAudio
	ADDON_LIBS+=libs/lib/osx/libfluidsynth.3.2.3.dylib
	#This is version fluidsynth 2.0.7 release. 2.0.8 had problems with CoreAudio driver and crashed..

ios:
	# osx/iOS only
	ADDON_INCLUDES += libs/fluidsynth/include/%		
	ADDON_FRAMEWORKS = CoreAudio
	ADDON_LIBS+=libs/lib/osx/libfluidsynth.3.2.3.dylib
