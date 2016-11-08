#include <iostream>
#include "items.h"

int countTotalItems(player *hero){
int total=0;
for(int i=0;i<MAX_ITEMS;i++)
total+=hero->backpack[i];

return total;
}
