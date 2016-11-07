#include <iostream>
#include <string>

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

int main(int argc,char* argv[])
{
Monster Ogre_MrAxe{ID_OGRE, "Mr_Axe", 150};
Monster Slime_MrBlach{ID_SLIME, "MrBlach", 200};
printMonster(Ogre_MrAxe);
printMonster(Slime_MrBlach);

return 0;
}
