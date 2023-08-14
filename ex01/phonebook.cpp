//
// Created by aymeric on 21/07/23.
//

#include "phonebook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void) {
	std::cout << "Bienvenu dans Phonebook" << std::endl;
	this->cnbr = 0;
	this->hcnbr = 0;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "A bientot avec Phonebook" << std::endl;
}

void PhoneBook::formatContact(std::string v)
{
	if (v.length() <= 10)
		std::cout << std::setw(10);
	else
	{
		v.resize (9);
		v.resize (10, '.');
	}
	std::cout << v;
	return;
}

void PhoneBook::formatIndex(int v)
{
	std::cout << std::setw(10);
	std::cout << v;

	return;
}

void PhoneBook::displayContact(void)
{
	int	index;

	std::cout << std::endl;
	std::cout << "Entrez l'index du contact a consulter : ";
	std::cin >> index;
	if (index >= this->cnbr || index < 0 || std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Contact inexistant !" << std::endl;
		return;
	}
	std::cout << std::endl;
	std::cout << "Contact N° : " << index << std::endl;
	std::cout << "Prenom : " << this->contact[index].getfname() << std::endl;
	std::cout << "Nom de Famille : " << this->contact[index].getlname() << std::endl;
	std::cout << "Surnom : " << this->contact[index].getsurname() << std::endl;
	std::cout << "Numero de Telephone : " << this->contact[index].getpnumber() << std::endl;
	std::cout << "Enorme Secret : " << this->contact[index].getsecret() << std::endl;
	return;
}

bool PhoneBook::addContact() {
	int index;

	if (this->cnbr == 8)
	{
		std::cout << "Vous avez atteint le nombre maximum de contact, votre contact le plus ancien sera ecrasé a chaque nouvel ajout." << std::endl;
		index = this->hcnbr;
	}
	else
		index = this->cnbr;

	if (!this->contact[index].setfname())
		return false;
	if (!this->contact[index].setlname())
		return false;
	if (!this->contact[index].setsurname())
		return false;
	if (!this->contact[index].setpnumber())
		return false;
	if (!this->contact[index].setsecret())
		return false;

	if (this->cnbr == 8 && this->hcnbr != 7)
		this->hcnbr = this->hcnbr + 1;
	else if (this->hcnbr == 7)
		this->hcnbr = 0;
	else
		this->cnbr = this->cnbr + 1;

	return true;
}

void PhoneBook::searchContact()
{
	int nc = 0;

	while (nc < this->cnbr)
	{
		this->formatIndex(nc);
		std::cout << "|";
		this->formatContact(this->contact[nc].getfname());
		std::cout << "|";
		this->formatContact(this->contact[nc].getlname());
		std::cout << "|";
		this->formatContact(this->contact[nc].getsurname());
		std::cout << std::endl;
		nc++;
	}
	this->displayContact();
}