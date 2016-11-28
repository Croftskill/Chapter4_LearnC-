#include <iostream>
#include <string>
#include <cstdlib>
#include <array>
#include <ctime>

class Point
{
private:
	int m_x = 0;
	int m_y = 0;
	int m_z = 0;
 
public:
	Point(int x, int y, int z)
		: m_x(x), m_y(y), m_z(z)
	{
 
	}
 
	friend std::ostream& operator<<(std::ostream &out, const Point &p)
	{
		out << "Point(" << p.m_x << ", " << p.m_y << ", " << p.m_z << ")";
		return out;
	}
};

class Shape
{
protected:
virtual std::ostream& print(std::ostream &out) const = 0;

friend std::ostream& operator<<(std::ostream &out, const Shape &shape)
{
return shape.print(out);
}

virtual ~Shape()
{}

};

class Triangle: public Shape
{
private:
Point m_p1,m_p2,m_p3;

public:
Triangle(Point p1,Point p2,Point p3):m_p1(p1),m_p2(p2),m_p3(p3)
{}

std::ostream& print(std::ostream &out) const override
{
return std::cout << "Triangle(" << m_p1 << ", " << m_p2 << ", " << m_p3 <<") \n";
}

};

class Circle: public Shape
{
private:
Point m_center;
int m_radius;

public:
Circle(Point center,int radius):m_center(center),m_radius(radius)
{}

std::ostream& print(std::ostream &out) const override
{
return std::cout << "Circle(" << m_center << "radius " << m_radius << ") \n";
}

};

int main()
{

Circle c(Point(1,2,3),7);
std::cout << c;

Triangle t(Point(1, 2, 3), Point(4, 5, 6), Point(7, 8, 9));
std::cout << t;
return 0;
}
