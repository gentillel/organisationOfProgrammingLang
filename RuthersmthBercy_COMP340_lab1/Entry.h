#include <iostream>
#include <string>


using namespace std;
class Entry{

	private:
	string name;
	string phoneNumber;
	string address;
	
	public:
	Entry(std::string n, std::string pn, std::string a){
		name = n;
		phoneNumber = pn;
		address = a;
	}

	void print(){
		std::cout << "name: " << name <<endl;
		std::cout << "phone number: " << phoneNumber <<endl;
		std::cout << "address: " << address <<endl;
		std::cout << endl;
	}

	std::string getName(){
		return name;
	}

};
