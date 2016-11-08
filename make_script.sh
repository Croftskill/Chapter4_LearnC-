#~/bin/sh

g++ -std=c++11 -c Items/items.cc -o Items/items.o
g++ -std=c++11 -c main.cc
g++ -std=c++11 -o main main.o Items/items.o

rm main.o ./Items/items.o
