#include <iostream>
#include <string>


using namespace std;
class Entry{

	private:
	std::string name;
	std::string phoneNumber;
	std::string address;
	
	public:
	Entry(std::string n, std::string pn, std::string a){
		name = n;
		phoneNumber = pn;
		address = a;
	}
	//print the information stored in the entry, ie: name, phoneNumber and address
	void print(){
		std::cout << "name: " << name <<std::endl;
		std::cout << "phone number: " << phoneNumber <<std::endl;
		std::cout << "address: " << address <<std::endl;
		std::cout << std::endl;
	}
	// returns the name for searching purpose
	std::string getName(){
		return name;
	}

};
