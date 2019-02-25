#ifndef PERSON_H
#include "Person.h"
#endif
class Student
{
public:
	Student(int Y, int G, Person1 p);
	~Student();
	void GetInfo();
	void SetGrade(int grade);
private:
	int year;
	int grade;
	Person1 p;
};

