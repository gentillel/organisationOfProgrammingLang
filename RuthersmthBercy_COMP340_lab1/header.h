#include <iostream>
#include <string>
#include <list>

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
	}

	std::string getName(){
		return name;
	}

};

class AddressBook{

	private:
	std::list<Entry*>entries;

	public:
	void addEntry(string n, string pn, string a){

		Entry* entry = new Entry(n,pn,a);
		entries.push_back(entry);

	}

	void printAddressBook(){
		std::cout<<"I am here"<<std::endl;
		//for(Entry* e : entries){
			//e->print();
		//	std::cout << "hey" ;
		//}
	}

	void searchAddressBook(std::string name){

		for(Entry* e : entries){
			//if (name.compare(e->getName() ==0)){
			//	e ->print();
			//}
		}
	}

};
