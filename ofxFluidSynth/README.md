ofxFluidSynth
=======
<p align="center">
<img src="https://raw.github.com/danomatika/ofxFluidSynth/master/res/FluidSynth_din.png"/>
</p>
Fluidsynth release 2.0.7
The most excellent FluidSynth addon for openFrameworks.


Description
-----------


Installation
------------

To use ofxFluidSynth, first you need to download and install openFrameworks. ofxFluidSynth is currently developed against the current stable version of openFrameworks on github.



macOS distribution / dynamic linking
------------
1.) You can run "brew install fluidsynth"
...or...
2.) You can bundle the libraries with your app. It's non-trivial to do, but a tool exists to ease the burden. 
a.) Clone the following https://github.com/auriamg/macdylibbundler and run make to build
b.) Copy the dylibbundler binary to your app folder, eg <OF_FOLDER>/apps/myApps/<YOUR_APP>
c.) Build your project to create bundle resulting in <OF_FOLDER>/apps/myApps/<YOUR_APP>/bin/<YOUR_APP>_debug
d.) Copy necessary libs to absolute /tmp path
```
cp ../../../addons/ofxFluidSynth/libs/lib/osx/libfluidsynth.2.2.0.dylib /tmp/libfluidsynth.2.dylib 
cp bin/<YOUR_APP>.app/Contents/MacOS/libfmodex.dylib /tmp/libfmodex.dylib
```
e.) Now run the tool to bundle the libraries with your app: 
```
dylibbundler -cd -od -b -x ./bin/<YOUR_APP>.app/Contents/MacOS/<YOUR_APP>.app -d ./bin/<YOUR_APP>.app/Contents/libs -p @executable_path/../libs/
```

f.) The tool will ask you where to locate  libfluidsynth.2.dylib and libfmodex.dylib reply with /tmp every time (it asks roughly 10 time). 

Finally! Your app will run as a standalone with all required dylibs bundled.

Inside <YOUR_APP> folder



Windows
------------
Fluidsynth, is a bit of a pain to *build* for windows, it requires:
DirectX (2010) SDK to be installed: https://www.microsoft.com/en-gb/download/details.aspx?id=6812
And the following instructions to be carried out:
https://github.com/FluidSynth/fluidsynth/wiki/BuildingWithCMake  (Building with MSYS2 on Windows)

I had an additional issue when running the cmake command
```
cmake -G "MSYS Makefiles" ..
```

Which I aleviated by running
```
export CC=/mingw64/bin/gcc
```

https://github.com/FluidSynth/fluidsynth/issues/592
