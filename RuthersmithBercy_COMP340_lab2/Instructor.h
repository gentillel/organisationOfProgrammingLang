#include "Person.h"

class Instructor : public Person
{

private:
	std::string employeeId;

public:
	Instructor(std::string iName, std::string iEmail, std::string id):Person(iName,iEmail){employeeId = id;};
	~Instructor();

	std::string GetEmployeeID(){
		return employeeId;
	}
	
};