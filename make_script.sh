#~/bin/sh

c++ -std=c++11 -c -g main.cc chain.cc
c++ -std=c++11 -o main main.o chain.o

rm main.o 
