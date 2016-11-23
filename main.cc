#include <iostream>
#include <string>
#include <cstdlib>
#include <array>
#include <ctime>

int getRandomNumber(int min, int max)
{
static const double fraction = 1.0 /(static_cast<double>(RAND_MAX) + 1.0);

return static_cast<int>(rand()*fraction*(max-min+1)+min);
}

class Creature
{
protected:

std::string m_name;
char m_symbol;
int m_health;
int m_hitpoint;
int m_gold;

public:

Creature(std::string name, char symbol, int health, int hitpoint, int gold):m_name(name), m_symbol(symbol), m_health(health), m_hitpoint(hitpoint), m_gold(gold)
{
}

std::string getName()
{
return m_name;
}

char getSymbol()
{
return m_symbol;
}

int getHealth()
{
return m_health;
}

int getHitpoint()
{
return m_hitpoint;
}

int getGold()
{
return m_gold;
}

void reduceHealth(int amount)
{
m_health-=amount;
}

bool isDead() const
{
return m_health<=0 ? true : false;
}

void addGold(int gold)
{
m_gold+=gold;
}
};

class Player : public Creature
{
private:
int m_level;

public:

Player(std::string name):Creature(name, '@', 10, 1, 0)
{
m_level = 1;
}

int getLevel()
{
return m_level;
}

void levelUp()
{
++m_level;
++m_hitpoint;
}

bool hasWon()
{
return getLevel() >= 20 ? true : false;
}

};

class Monster: public Creature
{
public:

enum Type
{
DRAGON,
ORC,
SLIME,
MAX_TYPES
};

struct MonsterData
{
std::string name;
char symbol;
int health;
int damage;
int gold;
};

static MonsterData monsterData[MAX_TYPES];


Monster(Type type): Creature(monsterData[type].name, monsterData[type].symbol, monsterData[type].health, monsterData[type].damage, monsterData[type].gold)
{
}

static Monster getRandomMonster()
{
int num = getRandomNumber(0, MAX_TYPES-1);


return Monster(static_cast<Type>(num));
}

};

Monster::MonsterData Monster::monsterData[Monster::MAX_TYPES]
{
	{"dragon", 'D', 20, 4, 100 },
	{"orc", 'o', 4, 2, 25 },
	{"slime", 's', 1, 1, 10},

};


int main()
{
srand(static_cast<unsigned int>(time(0))); // set initial seed value to system clock
rand(); // get rid of first result
char choice;
int gold;
std::string name;

std::cout<<"Enter your name: ";
std::cin>>  name;

Player Ja(name);

std::cout<< "Welcome, "<< name;

while(1)
{
Monster m = Monster::getRandomMonster();
std::cout<<"\nYou have encountered a "<< m.getName()<< " ("<<m.getSymbol()<<")\n";

while(1)
{
std::cout<< "(R)un or (F)ight: ";
std::cin>> choice;

while(choice !='f' && choice !='r')
{
std::cout<< "Wrong command!!\n";
std::cin>> choice;
}

if(choice == 'f')
{
	m.reduceHealth(Ja.getHitpoint());
	std::cout<< "You hit the "<< m.getName()<<" for "<< Ja.getHitpoint()<< " damage.\n";
	if(m.isDead())
	{
		std::cout<<"You killed the "<<m.getName()<<"\n";
		Ja.levelUp();
		std::cout<<"You are now level "<<Ja.getLevel()<<".\n";
		Ja.addGold(m.getGold());
		std::cout<<"You have found "<<m.getGold()<<" gold.\n";
		break;
	}
	else
	{
		Ja.reduceHealth(m.getHitpoint());
		std::cout<<"The "<<m.getName()<<" hit you for "<<m.getHitpoint()<<" damage.\n";
	}
}
else
{
	if(getRandomNumber(0,3)!=1)
	{
	std::cout<<"You successfully fled.\n";
	break;
	}
	else
	{
	std::cout<<"You failed to flee.\n";
	Ja.reduceHealth(m.getHitpoint());
	std::cout<<"The "<<m.getName()<<" hit you for "<<m.getHitpoint()<<" damage.\n";
	}	

}

if(Ja.getHealth()<=0)
{
	std::cout<<"You died at level "<<Ja.getLevel()<< " and with "<<Ja.getGold()<< " gold.\n";
	return 0;
}	
if(Ja.getLevel()>=20)
	{
	std::cout<<"You are the master. Jumped to 20 lvl\n";
	return 0;
	}
}
}
return 0; 
}

