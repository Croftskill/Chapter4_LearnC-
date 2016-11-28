#include <iostream>
#include <cstdlib>
#include <array>
#include <ctime>
#include <vector>
#include <string>

class Mystring
{
private:
std::string m_string;

public:
Mystring(std::string string):m_string(string)
{}

std::string operator()(int index, int char_num)
{
if(m_string.size() < index)
return "String is smaller than you asked!!";

if(m_string.size() < char_num + index)
return "Man index is ok but you asked for too many characters - overflow";

std::string my_string; // = &(m_string.at(index - 1));
int i, j;

for( j = 0; j < char_num; j++)
my_string += m_string[index+j-1];

//my_string.at(index+char_num) = '\0';

return my_string;
} 


};

int main()
{

Mystring string("Hello world!");
std::cout << "This is my string!!: " << string(7,5) << '\n';

return 0;
}
