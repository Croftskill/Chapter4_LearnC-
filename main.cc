#include <iostream>
#include <string>
#include <cstdlib>
#include <array>
#include <ctime>

class Fraction
{
private:
int m_numerator = 0;
int m_denumerator = 1;

public:

	Fraction(int numerator = 0 ,int denumerator = 1):m_numerator(numerator),m_denumerator(denumerator)
	{
	reduce();
	}

void	print()
	{
	std::cout << m_numerator << "/" << m_denumerator << std::endl;
	}

	friend Fraction operator*(const Fraction&, const Fraction&);
	friend Fraction operator*(const Fraction&, int);
	friend Fraction operator*(int, const Fraction&);

	friend std::ostream& operator<<(std::ostream&,const Fraction&);
	friend std::istream& operator>>(std::istream&, Fraction&);

static int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void	reduce()
	{
	int gcd_x=gcd(m_numerator,m_denumerator);
	/*if(gcd_x!=0)
		{
		m_numerator/=gcd_x;
		m_denumerator/=gcd_x;
		}
	}
	*/
	
		int gcd = Fraction::gcd(m_numerator, m_denumerator);
		m_numerator /= gcd;
		m_denumerator /= gcd;
	}
	

};

	Fraction operator*(const Fraction &f1, const Fraction &f2)
	{	
	return Fraction(f1.m_numerator*f2.m_numerator,f1.m_denumerator*f2.m_denumerator);
	}
	
	Fraction operator*(const Fraction& f1, int num)
	{
	return Fraction(f1.m_numerator*num,f1.m_denumerator);
	}
	
	Fraction operator*(int num, const Fraction& f1)
	{
	return f1*num;
	}

	std::ostream& operator<<(std::ostream &out, const Fraction &f)
	{
	out << f.m_numerator <<"/"<< f.m_denumerator;
	return out;
	}

	std::istream& operator>>(std::istream& in, Fraction& f)
	{
	in >> f.m_numerator;
	in >> f.m_denumerator;

	return in; 
	}

int main()
{

 
	Fraction f1;
	std::cout << "Enter fraction 1: \n";
	std::cin >> f1;
	f1.print();
 
	Fraction f2;
	std::cout << "Enter fraction 2: \n";
	std::cin >> f2;
	f2.print();
	
	Fraction f3=f1*f2; 

	std::cout << f1 << " * " << f2 << " is "<< f1 * f2 << '\n';
//	std::cout << (f1*f2); 
	return 0; 
}

