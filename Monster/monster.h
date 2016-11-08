#ifndef MONSTER_H
#define MONSTER_H

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

void printMonster(Monster xMonster);

#endif
