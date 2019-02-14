#include "Person.h"
#include <string>
class Tweeter :
	public Person1
{
private:
	std::string twitterhandle;
public:
	Tweeter(std::string first, std::string last, int num, std::string handle);
	~Tweeter();
};