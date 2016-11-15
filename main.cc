#include <iostream>
#include <string>
#include <cstdlib>
#include <array>

class Stack{

int array[10];
int length;

public:

void reset();
bool push(int);
int pop();
void print();

};

void Stack::reset()
{
for(int i;i<10;i++)
array[i] = 0;
length = -1;
}

bool Stack::push(int val)
{
if(length<10)
{
	length++;
	array[length] = val;
	return true;
}
else
return false;
}

int Stack::pop()
{
if(length>=0)
{
	length--;
	return array[length + 1];
}
else
return -1;
}

void Stack::print()
{
std::cout<<"( ";
for(int i=0;i<length + 1;i++)
std::cout<<array[i]<<" ";
std::cout<<")\n";
}

int main(){

	Stack stack;
	stack.reset();
 
	stack.print();
 
	stack.push(5);
	stack.push(3);
	stack.push(8);
	stack.print();
 
	stack.pop();
	stack.print();
 
	stack.pop();
	stack.pop();
 
	stack.print();

return 0;
}
