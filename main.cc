#include <iostream>
#include <string>
#include <cstdlib>

enum ID
	{
	ID_OGRE,
	ID_DRAGON,
	ID_ORC,
	ID_GIANT_SPIDER,
	ID_SLIME
	};

struct Monster
{
ID type;
std::string name;
int health;
};

using namespace std;
void printMonster(Monster xMonster)
{
switch(xMonster.type)
{
	case ID_OGRE:
std::cout<<"This Ogre is named "<<xMonster.name<<" and has "<<xMonster.health<<" health."<<endl;
		break;
	case ID_DRAGON:
std::cout<<"This Dragon is named "<<xMonster.name<<" and has "<<xMonster.health<<" health."<<endl;
		break;
	case ID_ORC:
std::cout<<"This Orc is named "<<xMonster.name<<" and has "<<xMonster.health<<" health."<<endl;
		break;
	case ID_GIANT_SPIDER:
std::cout<<"This Giant Spider is named "<<xMonster.name<<" and has "<<xMonster.health<<" health."<<endl;
		break;
	case ID_SLIME:
std::cout<<"This Slime is named "<<xMonster.name<<" and has "<<xMonster.health<<" health."<<endl;
		break;
	default:
		std::cout << "Smth WRONG! with ID number :)"<<endl;
		break;
}
}

int insertValue(int i){
int guess;
std::cout<<"Guess #"<<i<<": ";
std::cin>>guess;
return guess;
}

int main(int argc,char* argv[])
{
int i=1;
int thrown, guess;
srand(time(NULL));
thrown=rand()%100+1;

std::cout<<"Let's play a game. I'm thinking of a number. You have 7 tries to guess that it is."<<endl;

while(i<8){
guess=insertValue(i);
if(guess>thrown)
std::cout<<"Your guess is too high."<<endl;
else if(guess<thrown)
std::cout<<"Your guess is too low."<<endl;
else{
std:cout<<"Correct! You win!"<<endl;
break;
}
i++;
}


return 0;
}
