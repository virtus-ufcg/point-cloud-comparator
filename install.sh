#!/bin/bash

sudo apt update
sudo apt install build-essential -Y
sudo apt-get install unzip libpcl-dev tcl-vtk libopenni2-dev libqtwebkit-dev python-vtk6 -Y

sudo ln -s /usr/lib/python2.7/dist-packages/vtk/libvtkRenderingPythonTkWidgets.x86_64-linux-gnu.so /usr/lib/x86_64-linux-gnu/libvtkRenderingPythonTkWidgets.so
sudo ln -s /usr/lib/x86_64-linux-gnu/libvtkCommonCore-6.2.so /usr/lib/libvtkproj4.so

unzip samples.zip

mkdir build
cd build
cmake ..
make
