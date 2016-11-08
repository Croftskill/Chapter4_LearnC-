#ifndef ITEMS_H
#define ITEMS_H

enum Item{
	ITEM_HEALTH_POTION,
	ITEM_TORCHE,
	ITEM_ARROW,
	MAX_ITEMS
};

struct player{

int backpack[3]={2, 5, 10};

};

int countTotalItems(player *);

#endif
