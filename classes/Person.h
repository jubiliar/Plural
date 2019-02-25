#ifndef PERSON_H//without this I get a lot of errors because both Student.h and Tweeter.ha are using it and will try to add it
#define PERSON_H
#endif
#include <string>

class Person1
{
private:
	std::string firstname;
	std::string lastname;
	int age;
	const int agex=5;
public:	
	Person1(std::string first, std::string last, int num);
	Person1();
	~Person1();
	std::string getName();
	int getAge();
	std::string getNameConst() const;
	void SetAge(int age);
	void SetAgeConst(int age) const;
};