#include <iostream>
#include <cstdlib>
#include <array>
#include <ctime>
#include <vector>
#include <string>
#include <cassert>

class IntArray
{
private:
int *m_array = nullptr;
int m_size = 0;
public:

IntArray(int num):m_size(num)
{
assert(m_size > 0 && "IntArray length should be a positive integer");

m_array = new int[num];
}

IntArray(const IntArray& array):m_size(array.m_size)
{
m_array = new int[array.m_size];

} 

IntArray& operator=(const IntArray& intarray)
{
if(this==&intarray)
return *this;

delete[] m_array;
m_size = intarray.m_size;
m_array = new int[m_size];

for(int i = 0; i < m_size ; i++)
m_array[i] = intarray.m_array[i];

return *this;
}

friend std::ostream& operator<<(std::ostream& out,const IntArray& myarray)
{

for(int i = 0; i < myarray.m_size; i++)
std::cout << myarray.m_array[i] <<" ";

return out;
}

int& operator[](const int a)
{
assert(a >= 0);
assert(a < m_size);

return m_array[a];
}

~IntArray()
{
delete[] m_array;
}

};

IntArray fillArray()
{
	IntArray a(5);
	a[0] = 5;
	a[1] = 8;
	a[2] = 2;
	a[3] = 3;
	a[4] = 6;

	return a;
}

int main()
{

IntArray a = fillArray();
std::cout << a << '\n';

IntArray b(1);
a = a;
b = a;

std::cout << b << '\n';

return 0;
}
