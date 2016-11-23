#include <iostream>
#include <string>
#include <cstdlib>
#include <array>
#include <ctime>

class Fruit
{
private:
	std::string m_name;
	std::string m_color;

public:
	Fruit(std::string name,std::string color):m_name(name),m_color(color)
	{
	
	}

	std::string getName() const
	{
	return m_name;
	}
	
	std::string getColor() const
	{
	return m_color;
	}

};

class Apple : public Fruit
{
private:
	double m_fiber;

public:
	Apple(std::string name,std::string color,double fiber): Fruit(name, color), m_fiber(fiber)
	{

	}

friend std::ostream& operator<<(std::ostream &out, const Apple &apple)
	{
	std::cout << "Apple(" << apple.getName() << ", " << apple.getColor() << ", " << apple.m_fiber << ")\n" ;
	return out;
	}


};

class Banana : public Fruit
{
public: 
	Banana(std::string name,std::string color): Fruit(name, color)
	{
	}

friend std::ostream& operator<<(std::ostream &out, const Banana &banana)
	{
	std::cout << "Apple(" << banana.getName() << ", " << banana.getColor() << ")\n" ;
	return out;
	}

};

int main()
{	

const Apple a("Red delicius", "red", 4.2);
std::cout << a;

const Banana b("Caavendish", "yellow");
std::cout << b;

return 0; 
}

