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

enum Item{
	ITEM_HEALTH_POTION,
	ITEM_TORCHE,
	ITEM_ARROW,
	MAX_ITEMS
};

struct player{

int backpack[3]={2, 5, 10};

};

int countTotalItems(player *hero){
int total=0;
for(int i=0;i<MAX_ITEMS;i++)
total+=hero->backpack[i];

return total;
}

int main(int argc,char* argv[])
{
int total;
player Hero;
Hero.backpack[0]=66;
total=countTotalItems(&Hero);

std::cout<<"Total amount of items: "<<total<<endl;


return 0;
}
