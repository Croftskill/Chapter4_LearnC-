#include <iostream>
#include "monster.h"

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
