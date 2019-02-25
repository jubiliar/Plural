#include "Person.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Person1::Person1(string first, string last, int num) :
	firstname(first),
	lastname(last),
	age(num)
{
	cout << "constructing 3 param entry " << firstname << " " << lastname << std::endl;
}

Person1::Person1():age(0)
{
	cout << "constructing no param " << firstname << " " << lastname << std::endl;
}

Person1::~Person1()
{
	cout << "destructing " << firstname << " " << lastname << std::endl;
}

std::string Person1::getName()
{
	return firstname + " " + lastname;
}
int Person1::getAge()
{
	return age;
}

std::string Person1::getNameConst() const
{
	return firstname + " " + lastname;
}

void Person1::SetAge(int xage)
{
	age = xage;
}

/*
void Person1::SetAgeConst(int xage) const
{
	agex = xage;
}
*/
//cannot modify a costant value
