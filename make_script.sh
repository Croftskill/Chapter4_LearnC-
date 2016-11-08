#~/bin/sh

g++ -std=c++11 -c CstyleString/cstyle_string.cpp
g++ -std=c++11 -c main.cc
g++ -std=c++11 -o main main.o cstyle_string.o

rm main.o 
