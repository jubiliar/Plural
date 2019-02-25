
#include <iostream>
#include <vector>
using namespace std;
void printValueStar(int* a)
{
	cout << "This is the value of a from printValueStar "<< a <<endl;
	cout << "This is the value of *a from printValueStar " << *a << endl;
	cout << "This is the value of &a from printValueStar " << &a << endl;
	(*a)++;
	cout << "This is the new value of *a from printValueStar after *a++ " << *a << endl;
}
void printValueAnd(int &a)
{
	cout << "This is the value of a from printValueAnd " << a << endl;
	cout << "Cannot use *a from printValueAnd " << endl;
	cout << "This is the value of &a from printValueAnd " << &a << endl;
	a++;
	cout << "This is the new value of a from printValueAnd after a++ " << a << endl;
}
void helloWorld()
{
	cout << "Hello from the function" << endl;
}
void helloWorldInt(int a)
{
	cout << "Hello "<< a << endl;
}
void PrintValue(int value)
{
	cout << "Value " << value << endl;
}
void ForEach(const std::vector<int>& values, void(*func)(int) )//"vector<int>& values" it takes in the vector of integers.  "void(*func)(int)"   *func is the name used for calling the function and takes a int
{
	for (int value : values) //value in values
		func(value);

}

int main()
{
	//______________________________________________________________
	//Define a pointer
	std::cout << "Define a pointer *p =5" << endl;
	char* pChar = new char;
	int* p = new int;
	*p = 5;
	
	std::cout << "this is a value pointed by pointer *p "<<*p << endl;
	std::cout << "this is a address pointed by pointer p " << p << endl << endl;

	//______________________________________________________________
	//change the address pointed by the p pointer
	std::cout << "Define a new variable and change the pointer addrest to point to it p =&a" <<endl;
	int a = 4;
	std::cout << "Where a is " << a << endl;
	p = &a;

	std::cout << "this is a value pointed by pointer *p " << *p << endl;
	std::cout << "this is a address pointed by pointer p " << p << endl << endl;

	//______________________________________________________________
	//call a function that will print my value
	std::cout << "Call a function accepts an argument passed by refference printValueStar(int* a)" << endl;
	std::cout << "This is the value of a " << a << endl;
	std::cout << "Output of printValueStar(&a)" << endl;
	printValueStar(&a);
	std::cout << "Value a was modified in the printValueAnd(&a) because it was passed as refference" << endl;
	cout << a << endl;
	std::cout << "" << endl;

	//______________________________________________________________
	//call a function that will print my value
	std::cout << "Call a function that accepts an argument passed by refference printValueStar(int* a)" << endl;
	std::cout << "This is the value of p " << p << endl;
	std::cout << "Output of printValueStar(p)" << endl;
	printValueStar(p);
	std::cout << "" << endl;
	//______________________________________________________________
	//call a function that will print my value
	std::cout << "Call a function accepts an argument passed by refference printValueAnd(int &a)" << endl;
	std::cout << "This is the value of a " << a << endl;
	std::cout << "Output of printValueAnd(a)" << endl;
	printValueAnd(a);
	std::cout << "Value a was modified in the printValueAnd(a) because it was passed as refference" << endl;
	cout << a << endl;
	std::cout << "" << endl;

	//______________________________________________________________
	//call a function that will print my value
	std::cout << "Call a function that accepts an argument passed by refference printValueAnd(int &a)" << endl;
	std::cout << "This is the value of p " << p << endl;
	std::cout << "Output of printValueAnd(*p)" << endl;
	printValueAnd(*p);
	std::cout << "" << endl;

	//______________________________________________________________
	//Function pointer. We can create a variable that is actually pointing to a function
	std::cout << "Define a function and call it using a variable myDefInt functionInt = helloWorldInt;  " << endl;
	//auto function = &helloWorld;
	//We use auto because we don't know the type of variable that the function returns. 
	//If we had to write it, it should be something like this void(*fucntion)() which looks ungly. 
	//void(*fucntion)();
	//function = &helloWorld;
	//If we need to define it explicitly and we want to look nicer, we can create out typdef
	
	typedef void(*myDef)();
	myDef function = helloWorld;//Which takes the function address and passed to this pointer variable type. It is the same as myDef functionInt = &helloWorld;

	std::cout << "this is address pointer function " << function << endl;
	std::cout << "this is value pointer function " << *function << endl;
	std::cout << "Calling the function() " << endl;
	function();
	std::cout << "" << endl;

	//______________________________________________________________
	//Function pointer that accepts an int parameter.
	std::cout << "Define a function that accepts an int and call it using a variable myDefInt functionInt = helloWorldInt;  " << endl;
	typedef void(*myDefInt)(int);
	myDefInt functionInt = helloWorldInt; 

	std::cout << "this is address pointer function " << functionInt << endl;
	std::cout << "this is value pointer function " << *functionInt << endl;
	std::cout << "Calling the function() " << endl;
	functionInt(2);
	std::cout << "" << endl;

	//______________________________________________________________
	//Practical example using pointer function
	std::cout << "Practical exaple on using functions as variables  ForEach(values, PrintValue); " << endl;
	std::vector<int> values = { 1,2,3,4,5 };//this defines a vector of integers called values
	ForEach(values, PrintValue); //we passin the value and the function

}
