#include <iostream>
#include <string>
#include <cstdlib>
#include "./Monster/monster.h"
#include "./Guess/guess.h"
#include "./Items/items.h"


int main(int argc,char* argv[])
{
int total;
player Hero;
Hero.backpack[0]=12;
total=countTotalItems(&Hero);

std::cout<<"Total amount of items: "<<total<<std::endl;

return 0;
}
