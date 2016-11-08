#include <iostream>
#include <utility>
#include "sort_grade.h"

void swap_meine(student &start, student &end){

student var;

var=start;
start=end;
end=var;

}

void fill_students(student *List_of_students,int student_am){

for(int i=0;i<student_am;i++){

	std::string name;
	int grade;

	std::cout<<"Student #"<<i+1<<": \n\tProvide student name ";
	std::cin>>name;
	List_of_students->name=name;
	std::cout<<" \tProvide student grade ";
	std::cin>>grade;
	List_of_students->grade=grade;
	
	List_of_students++;
	}
}


void *sort_students(student List_of_students[], int student_am){

int highest_grade_index;
student *List_stud_swap=List_of_students;
List_stud_swap++;
int index=0;


for(int start_index=0;start_index<student_am; start_index++){

highest_grade_index=start_index;

	for(int current_index=start_index+1;current_index<student_am;current_index++){

	if(List_of_students[highest_grade_index].grade<List_of_students[current_index].grade)
	highest_grade_index=current_index;
	
	}

//std::swap(List_of_students[start_index],List_of_students[highest_grade_index]);
swap_meine(List_of_students[start_index],List_of_students[highest_grade_index]);
}

}

void display_students(student *List_of_students, int student_am){

for(int i=0;i<student_am;i++){
std::cout<<List_of_students->name<<" got a grade of "<<List_of_students->grade<<std::endl;
List_of_students++;
}
}
