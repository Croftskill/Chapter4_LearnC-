#include <iostream>
#include <cstdlib>
#include <array>
#include <ctime>
#include <vector>
#include <string>
#include <cassert>

template <typename T, int mysize>
class MyArray
{
private:
T m_array[mysize];
int m_size;

public:

MyArray():m_size(mysize)
{
for(int i = 0; i < m_size; i++)
m_array[i] = 0;

}

void printKOKO()
{
std::cout << "KOKO";
}

T& operator[](const int index)
{
assert(index < m_size && "That entry not exist in this obiect");
assert(index >= 0 && "Index must be higher that 0!");

return m_array[index];
}

};

template <>
void MyArray<char,10>::printKOKO()
{
std::cout << "KOKOSZAAA\n";
}


template <typename T, int mysize>
class MyArray<T*, mysize>
{
private:
T** m_array;
int m_size;

public:
MyArray():m_size(mysize)
{
m_array = new T*[m_size];

}

T** operator[](const int index)
{
assert(index < m_size && "That entry not exist in this obiect");
assert(index >=0 && "Index must be higher that 0!");

return (m_array+index);
}


~MyArray()
{
delete[] m_array;
}

};

int main()
{

MyArray<int*, 10> my_pointers;
MyArray<char, 10> my_array;

for(int i = 0; i < 10; i++)
{
my_array[i] = i;
//my_pointers[i] = &(my_array[i]);

}

//my_pointers[1] = NULL; 

my_array[1] = 66;

my_array.printKOKO();
//std::cout << my_array.printKOKO() << '\n';



return 0;
}
