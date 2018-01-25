
#include <list>
#include "Entry.h"

using namespace std;


class AddressBook{

	private:
	std::list<Entry*>entries;

	public:
	void addEntry(string n, string pn, string a){

		Entry* entry = new Entry(n,pn,a);
		entries.push_back(entry);

	}

	void printAddressBook(){
		std::cout<<std::endl;
		list<Entry*>::iterator it;

		for(it = entries.begin(); it != entries.end(); it++){
			(*it)->print();
		}
	}

	void searchAddressBook(std::string name){

		for(Entry* e : entries){
			//if (name.compare(e->getName() ==0)){
			//	e ->print();
			//}
		}
	}

};
