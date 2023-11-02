#pragma once
#include "Contact.h"

class Group
{
	std::string name;
	Contact* contacts;
	int size;
	int count;
public:
	Group();
	Group(std::string name, int size);
	~Group();
	std::string getName() const;
	Contact* getContacts() const;
	int getSize() const;
	int getCount() const;
	void addContact(const Contact& contact);
	void delContact(std::string name);
};
