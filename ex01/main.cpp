//
// Created by aymeric on 12/08/23.
//

#include "PhoneBook.hpp"

int main(void) {
	std::string input;
	PhoneBook phonebook;

	std::cout << std::endl << "Votre commande : ";
	std::cin >> input;
	while (input != "EXIT") {
		if (input == "ADD") {
			std::cout << "Nouveau Contact" << std::endl;
			if (phonebook.addContact())
				std::cout << "Contact Enregistré !" << std::endl;
			else
				std::cout << "Une erreur c'est produite ! Remplissez bien tout les champs." << std::endl;
		}
		else if (input == "SEARCH") {
			std::cout << "Vos Contact :" << std::endl;
			phonebook.searchContact();
		}
		std::cout << std::endl << "Votre commande : ";
		std::cin >> input;
	}
	return 0;
}