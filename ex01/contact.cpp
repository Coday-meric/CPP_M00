//
// Created by aymeric on 12/08/23.
//
#include "phonebook.hpp"

std::string Contact::getsurname(void)
{
	return this->surname;
}

std::string Contact::getfname(void)
{
	return this->fname;
}

std::string Contact::getlname(void)
{
	return this->lname;
}

std::string Contact::getpnumber(void)
{
	return this->pnumber;
}

std::string Contact::getsecret(void)
{
	return this->secret;
}

bool Contact::setsurname(void)
{
	std::string input;

	std::cout << "Surnom : ";
	std::cin >> input;
	if (input != "")
		this->surname = input;
	else
		return false;
	return true;
}

bool Contact::setfname(void)
{
	std::string input;

	std::cout << "Prénom : ";
	std::cin >> input;
	if (input != "")
		this->fname = input;
	else
		return false;
	return true;
}

bool Contact::setlname(void)
{
	std::string input;

	std::cout << "Nom de Famille : ";
	std::cin >> input;
	if (input != "")
		this->lname = input;
	else
		return false;
	return true;
}

bool Contact::setpnumber(void)
{
	std::string input;

	std::cout << "Numero de Telephone : ";
	std::cin >> input;
	if (input != "")
		this->pnumber = input;
	else
		return false;
	return true;
}

bool Contact::setsecret(void)
{
	std::string input;

	std::cin.ignore();
	std::cout << "Enorme Secret : ";
	std::getline(std::cin, input);
	if (input != "")
		this->secret = input;
	else
		return false;
	return true;
}
