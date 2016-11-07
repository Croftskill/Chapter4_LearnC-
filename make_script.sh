#~/bin/sh

g++ -std=c++11 -c main.cc
g++ -std=c++11 -o main main.o

rm main.o
