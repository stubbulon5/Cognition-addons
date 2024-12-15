#!/bin/bash
SDK_DIR="../VST_SDK/"
rm -rf $SDK_DIR
git clone --recursive https://github.com/steinbergmedia/vst3sdk.git $SDK_DIR
cd $SDK_DIR
rm -rf build
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ../
make

cd ..

rm -rf build_debug
mkdir build_debug
cd build_debug
cmake -DCMAKE_BUILD_TYPE=Debug ../
make
