#include <iostream>
using namespace std;//this is done in order not to write std::cout and just cout

int main()
{
	int i1 = 1;
	std::cout << "i1= " << i1 << std::endl;

	double d1 = 2.2;
	double d2 = i1;

	//This will print 2 because a float cannot fit in a int
	//int i5 = d1;
	int i5 = static_cast<int>(d1); //this is casting a float into an int
	std::cout << "d1= " << d1 << std::endl;//2.2
	std::cout << "d2= " << d2 << std::endl;//1
	std::cout << "i5= " << i5 << std::endl;//2

	char c1 = 'a';
	char c2 = i1;//this will print wierd things
	std::cout << "c1= " << c1 << std::endl;
	std::cout << "c2= " << c2 << std::endl;

	bool flag = false;
	std::cout << "flag= " << flag << std::endl;
	flag = i1;//any int different than 0 or char will have the value of true
	std::cout << "flag= " << flag << std::endl;
	flag = 0;//and int of 0 means False
	std::cout << "flag= " << flag << std::endl;
	flag = d1;
	std::cout << "flag= " << flag << std::endl;


	auto a1 = 1;
	auto a2 = 2.2;
	auto a3 = 'c';
	auto a4 = "s";
	auto a5 = true;
	auto a6 = 3L;
	auto a7 = 1'000'000'000'000;
	auto a8 = 0xFF;    //255
	auto a9 = 0b111;   //7

//	a1 = a2;
	a1 = static_cast<int>(a2);

/*		unsigned char n1 = 128;
		char n2 = 128;
		std::cout << "n1= " << n1 << std::endl;
		std::cout << "n2= " << n2 << std::endl;
		n1 = 254;
		n2 = 254;
		std::cout << "n1= " << n1 << std::endl;
		std::cout << "n2= " << n2 << std::endl;
		n1 = 300;
		n2 = 300;
		std::cout << "n1= " << n1 << std::endl;
		std::cout << "n2= " << n2 << std::endl;
*/	
	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << endl;
	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
	enum color { red, green, asd, blue } c;
	c = blue;
	cout << "Enum c is: " << c << endl;
	cout << "Enum color is: " << color{ red } << endl;
	int a = 2;
	cout << "a is " << a << endl;
	cout << "cast of a is " << static_cast<char>(a) << endl;
	return 0;
}

