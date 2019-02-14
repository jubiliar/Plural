// L4.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>

using namespace std;

int main() {
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
	cout << "Enum color is: " << color{red} << endl;
	int a = 2;
	cout << "a is " << a << endl;
	cout << "cast of a is " << static_cast<char>(a) << endl;
	return 0;
}
