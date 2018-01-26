#include "AddressBook.h"

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

		std::cout <<std::endl;		

		if(user.compare("1") == 0 ){

			string name, phone, address;

			std::cout << "please type in the name" <<endl;
			getline(std::cin, name);
			
			std::cout << "please type in the phone number" <<endl;
			getline(std::cin, phone);
			
			std::cout << "please type in the address" <<endl;
			getline(std::cin, address);
		
			addressBook.addEntry(name,phone,address);	
			
		}

		if (user.compare("2") == 0 ){
			addressBook.printAddressBook();
		}

		if (user.compare("3") == 0) {
			std::string name;
			std::cout << "what is the name you are searching for:" << endl;
			getline(std::cin, name); 
			addressBook.searchAddressBook(name);
		}
		
		std::cout << endl;
		std::cout << "choose a menu option" <<endl;
		getline(std::cin, user);	

	}

return 0;

}
