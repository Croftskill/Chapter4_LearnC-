#include <iostream>
#include <string>
#include <cstdlib>
#include "SortGrade/sort_grade.h"

int main(int argc,char* argv[])
{

int students_amount;
std::cout<<"Provide number of students: ";
std::cin>>students_amount;

student *List_of_students=new student[students_amount];

fill_students(List_of_students, students_amount);
sort_students(List_of_students, students_amount);
display_students(List_of_students, students_amount);

delete [] List_of_students;

return 0;
}
