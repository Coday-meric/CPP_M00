//
// Created by aymeric on 21/07/23.
//

#ifndef CPP_M00_PHONEBOOK_HPP
#define CPP_M00_PHONEBOOK_HPP
#include <iostream>

class Contact {
private:
	std::string surname;
	std::string fname;
	std::string lname;
	std::string pnumber;
	std::string secret;
public:
	std::string getsurname();
	std::string getfname();
	std::string getlname();
	std::string getpnumber();
	std::string getsecret();
	bool setsurname();
	bool setfname();
	bool setlname();
	bool setpnumber();
	bool setsecret();
};

class PhoneBook {
public:
	PhoneBook(void);
	~PhoneBook(void);
	bool addContact(void);
	void searchContact(void);

private:
	Contact contact[8];
	void formatContact(std::string v);
	void formatIndex(int v);
	void displayContact(void);
	int cnbr;
	int hcnbr;
};




#endif //CPP_M00_PHONEBOOK_HPP
