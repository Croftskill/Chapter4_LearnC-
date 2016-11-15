#~/bin/sh

c++ -std=c++11 -c -g main.cc
c++ -std=c++11 -o main main.o

rm main.o 
