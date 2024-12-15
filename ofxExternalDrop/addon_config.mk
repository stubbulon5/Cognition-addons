meta:
	ADDON_NAME = ofxExternalDrop
	ADDON_DESCRIPTION = External Drag and Drop for OpenFrameworks
	ADDON_AUTHOR = Stubbulon5 and P. Potter
	ADDON_TAGS = "Drag" "Drop" "UI" "midi" "cross platform"
	ADDON_URL = http://github.com/<TODO>

common:
	ADDON_INCLUDES += src/

linux64:
	ADDON_SOURCES_EXCLUDE += src/platform/osx/%
	ADDON_SOURCES_EXCLUDE += src/platform/win/%
	ADDON_SOURCES_EXCLUDE += src/platform/unsupported/%

linux:
	ADDON_SOURCES_EXCLUDE += src/platform/osx/%
	ADDON_SOURCES_EXCLUDE += src/platform/win/%
	ADDON_SOURCES_EXCLUDE += src/platform/unsupported/%

linuxarmv6l:
	ADDON_SOURCES_EXCLUDE += src/platform/osx/%
	ADDON_SOURCES_EXCLUDE += src/platform/win/%
	ADDON_SOURCES_EXCLUDE += src/platform/unsupported/%

linuxarmv7l:
	ADDON_SOURCES_EXCLUDE += src/platform/osx/%
	ADDON_SOURCES_EXCLUDE += src/platform/win/%
	ADDON_SOURCES_EXCLUDE += src/platform/unsupported/%

msys2:
	ADDON_SOURCES_EXCLUDE += src/platform/osx/%
	ADDON_SOURCES_EXCLUDE += src/platform/x11/%
	ADDON_SOURCES_EXCLUDE += src/platform/unsupported/%

	ADDON_LIBS+=mfc42d.dll
	ADDON_LIBS+=mfco42d.dll

vs:
	ADDON_SOURCES_EXCLUDE += src/platform/osx/%
	ADDON_SOURCES_EXCLUDE += src/platform/x11/%
	ADDON_SOURCES_EXCLUDE += src/platform/unsupported/%

android/armeabi:
	# No support
android/armeabi-v7a:
	# No support
osx:
	ADDON_SOURCES_EXCLUDE += src/platform/x11/%
	ADDON_SOURCES_EXCLUDE += src/platform/win/%
	ADDON_SOURCES_EXCLUDE += src/platform/unsupported/%

ios:
	# No support
	ADDON_SOURCES_EXCLUDE += src/platform/osx/%
	ADDON_SOURCES_EXCLUDE += src/platform/x11/%
	ADDON_SOURCES_EXCLUDE += src/platform/win/%		
