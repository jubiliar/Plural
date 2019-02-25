#include <iostream>
#include "Tweeter.h"
#include "Status.h"
#include "Student.h"

int main()
{
    std::cout << "Hello World!\n"; 
	//create an object of class Person1 passing 3 parameters
	Person1 p1("ion","geo",5);
	{
		//creates an object that inherites Person1 class
		Tweeter t1("Someone","Else",456,"@blablabla");
		std::string name2 = t1.getName();
	}

	std::string name = p1.getName();
	int i = p1.getAge();
	std::cout << "age of " <<name << " is "<< i << std::endl;

	//Creating an object without specifying any parameters
	Person1 p2;
	std::cout << "age of " << p2.getName() << " is " << p2.getAge() << std::endl;
	
	//Create a pointer that will ploint to p1 object
	Person1* ptrP1;
	ptrP1 = &p1;

	std::cout << "Getting name from P1 object using a poiter" << std::endl;
	std::cout << ptrP1->getName() << std::endl;

	//Creating const Objects

	const Person1 p3("Imuabilul", "Costel", 100);

	std::cout << "Getting name from P3 const object" << std::endl;
	//std::cout << p3.getName() << std::endl;// This generates comp error. Const objects can call only const functions.
	std::cout<<"This is constant function on constant obj " << p3.getNameConst() << std::endl;// Had to declare a const function in order to do anything with my object
	std::cout <<"This is constant funciton on normal object " <<p1.getNameConst() << std::endl;//Normal object can call const funcitons

	//modify p1 age with SetAge()
	std::cout << "modify p1 age with SetAge()" << std::endl;
	std::cout << "Age of p1 befor is " << p1.getAge() << std::endl;
	p1.SetAge(4);
	std::cout << "Age of p1 after is " << p1.getAge() << std::endl;

	//Try to modify the const p3
	//p3.SetAge(4);//Build Error


	//Composition. Build the Student s1 which is made of Person1 and some aditiona data.
	std::cout << "Build the Student s1 which is made of Person1 and some aditiona data like Year and Grade " << std::endl;
	Student s1(5, 10, p1);
	s1.GetInfo();
	//s1.GetName(); this generates Error. I can add this function in the Student class definition



	//Enum Example
	Status s = Pending;
	s = Approved;
	
	FileError fe = FileError::notFound;
	fe = FileError::ok;
	
	NetworkError ne = NetworkError::disconnected;
	ne = NetworkError::ok;

}
