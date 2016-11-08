#ifndef SORT_GRADE_H
#define SORT_GRADE_H

struct student{

std::string name;
int grade;
};

void fill_students(student *List_of_students,int student_am);

void *sort_students(student List_of_students[], int student_am);

void display_students(student *List_of_students, int student_am);

#endif
