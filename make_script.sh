#~/bin/sh

c++ -std=c++11 -lpthread -c -g main.cc
c++ -std=c++11 -lpthread -o main main.o

rm main.o 
