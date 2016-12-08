#!/bin/sh

cmake TestMakeDir/CMakeLists.txt
cd TestMakeDir
make
./runTests
