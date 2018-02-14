
#include <string>

class Person
{

protected:
	std::string name;
	std::string emailAddress;

public:
	Person(std::string pName, std::string email ){
		name = pName;
		emailAddress = email;
	};

	~Person(){};
	
	std::string GetName(){
		return name;
	}

	std::string GetEmailAddress(){
		return emailAddress;
	}

};