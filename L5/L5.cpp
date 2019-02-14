#include <iostream>
#include "Tweeter.h"
#include "Status.h"

int main()
{
    std::cout << "Hello World!\n"; 
	Person1 p1("ion","geo",5);
	{
		Tweeter t1("Someone","Else",456,"@blablabla");
		std::string name2 = t1.getName();
	}
	std::string name = p1.getName();
	int i = p1.getAge();
	std::cout << "age of " <<name << " is "<< i << std::endl;
//	std::cout << "age of " << p2.getName() << " is " << p2.getAge() << std::endl;
	
	Status s = Pending;
	s = Approved;
	
	FileError fe = FileError::notFound;
	fe = FileError::ok;
	
	NetworkError ne = NetworkError::disconnected;
	ne = NetworkError::ok;

}
