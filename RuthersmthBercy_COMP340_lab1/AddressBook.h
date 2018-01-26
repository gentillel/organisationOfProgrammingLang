
#include <list>
#include "Entry.h"

class AddressBook{

	private:
	std::list<Entry*>entries;

	public:

	//add entries to our list
	void addEntry(std::string n, std::string pn, std::string a){

		Entry* entry = new Entry(n,pn,a);
		entries.push_back(entry);

	}

	//prints our address book
	void printAddressBook(){
		std::cout<<std::endl;
		std::list<Entry*>::iterator it;

		for(it = entries.begin(); it != entries.end(); it++){
			(*it)->print();
		}
	}

	//search the adress book for a particuar entry with the name as an id
	void searchAddressBook(std::string name){

		std::list<Entry*>::iterator it;

		for(it = entries.begin(); it != entries.end(); it++){
		
			if ((*it)->getName().compare(name) == 0){
				(*it)->print();
				return;
			}
		}
		std::cout << "No such name exist" <<std::endl;
	}

};
