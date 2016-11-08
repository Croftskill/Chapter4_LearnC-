#include <iostream>
#include "guess.h"

int insertValue(int i){
int guess;
std::cout<<"Guess #"<<i<<": ";
std::cin>>guess;
return guess;
}

