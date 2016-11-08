#~/bin/sh

g++ -std=c++11 -c SortGrade/sort_grade.cpp -o SortGrade/sort_grade.o
g++ -std=c++11 -c main.cc
g++ -std=c++11 -o main main.o SortGrade/sort_grade.o

rm main.o 
