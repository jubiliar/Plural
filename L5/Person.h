#include <string>

class Person1
{
private:
	std::string firstname;
	std::string lastname;
	int age;
public:	
	Person1(std::string first, std::string last, int num);
	Person1();
	~Person1();
	std::string getName();
	int getAge();
};