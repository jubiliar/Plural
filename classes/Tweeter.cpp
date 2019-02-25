#include "Tweeter.h"
#include <iostream>

Tweeter::Tweeter(std::string first, std::string last, int num, std::string handle) :
	Person1(first, last, num), twitterhandle(handle)
{
	std::cout << "constructing tweeter " << twitterhandle << std::endl;
}
Tweeter::~Tweeter()
{
	std::cout << "destructing tweeter " << twitterhandle << std::endl;
}