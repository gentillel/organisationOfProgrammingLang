#include "header.h"

int main(){

	//int user;
	AddressBook addressBook;

	std::cout << "type 1 to create a new entry" <<endl;
	std::cout << "type 2 to print the addressBook" <<endl;
	std::cout << "type 3 to search for some one" <<endl;
	std::cout << "type 4 to quit" <<endl;

	std::string user;
	getline(std::cin, user);
	//std::cin >> user;
	
	while (user.compare("4") != 0 ){

		if(user.compare("1") == 0 ){

			string name, phone, address;
			std::cout << "please type in the name" <<endl;
			//std::cin >> name;
			getline(std::cin, name);
			std::cout << "please type in the phone number" <<endl;
			//std::cin >> phone;
			getline(std::cin, phone);
			std::cout << "please type in the address" <<endl;
			//std::cin >> address;
			getline(std::cin, address);
			
			addressBook.addEntry(name,phone,address);	
			
		}

		if (user.compare("2") == 0 ){
			//addressBook.printAddressBook();
		}

		/*if (user == 3) {
			std::string name;
			std::cin >> name;
			//addressBook.searchAddressBook(name);
		}*/
		
		std::cout << endl;
		std::cout << "choose a menu option" <<endl;
		std::cin >> user;	

	}

return 0;

}
