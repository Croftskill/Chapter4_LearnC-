#include <iostream>
#include <string>
#include "cstyle_string.h"

void print_C_style_string(char *C_style_string){

int index=0;

while(*C_style_string!='\0'){
	index++;
	std::cout<<"char number "<<index<<": "<<*C_style_string<<std::endl;
	C_style_string++;
	}

}
