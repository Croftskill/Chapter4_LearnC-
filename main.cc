#include <iostream>
#include <cstdlib>
#include <array>
#include <ctime>
#include <vector>
#include <string>

class Average
{
private:
int32_t m_sum;
int8_t amount;

public:
Average():m_sum(0), amount(0)
{}

Average& operator+=(int num)
{
m_sum+=static_cast<int32_t>(num);
amount++;

return *this;
}

friend std::ostream& operator<<(std::ostream& out, const Average& average)
{

std::cout<<static_cast<double>(average.m_sum)/static_cast<double>(average.amount);




return out;
}

};

int main()
{

Average avg;

avg += 4;
std::cout << avg << '\n';

avg += 8;
std::cout << avg << '\n';

avg += 24;
std::cout << avg << '\n';

avg +=-10;
std::cout << avg << '\n';

(avg += 6) += 10;
std::cout << avg << '\n';

Average copy = avg;
std::cout << copy << '\n';

return 0;
}
