#include "framework.h"
#include "Contact.h"

Contact::Contact() : name("-"), city("-"), phone("-")
{}

Contact::Contact(std::string name, std::string city, std::string phone)
	: name(name), city(city), phone(phone)
{}

Contact::~Contact()
{}

std::string Contact::getName() const
{
	return name;
}

std::string Contact::getCity() const
{
	return city;
}

std::string Contact::getPhone() const
{
	return phone;
}
