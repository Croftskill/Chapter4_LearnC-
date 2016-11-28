#include <iostream>
#include <cstdlib>
#include <array>
#include <ctime>
#include <vector>
#include <string>

struct StudentGrade
{
std::string student_name;
char grade;
};

class GradeMap
{
private:
std::vector<StudentGrade> m_map;

public:
GradeMap(){}

char& operator[]( const std::string &name)
{
int index = 0;
index = m_map.size();

for(index = 0; index < m_map.size(); index++) 
if(m_map.at(index).student_name==name)
return m_map.at(index).grade;


StudentGrade x {name, ' '};
m_map.push_back(x);

return m_map.back().grade;
}



};

int main()
{


	GradeMap grades;
	grades["Joe"] = 'A';
	grades["Frank"] = 'B';
	std::cout << "Joe has a grade of " << grades["Joe"] << '\n';
	std::cout << "Frank has a grade of " << grades["Frank"] << '\n';

return 0;
}
