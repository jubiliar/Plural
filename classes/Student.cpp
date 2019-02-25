#include "Student.h"
#include <iostream>

Student::Student(int Y, int G, Person1 pers):
	year(Y),
	grade(G),
	p(pers)	
{
}

void Student::GetInfo()
{
	p.getName();
	std::cout << "Year = " <<year << std::endl;
	std::cout<< "Grade = " << grade<<std::endl;
}

void Student::SetGrade(int nota) 
{
	grade = nota;
}

Student::~Student()
{
}
