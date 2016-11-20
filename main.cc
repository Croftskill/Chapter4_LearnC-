#include <iostream>
#include <string>
#include <cstdlib>
#include <array>
#include "chain.h"

int main()
{

Chain my_chain;

std::cout<<my_chain.add(5).sub(0).mult(20).getVar()<<std::endl;
//std::cout<<my_chain.getVar()<<std::endl;

return 0;
}
