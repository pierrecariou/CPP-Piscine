#include "minitel.hpp"
#include "Contact.hpp"

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::addInfos(void) {
	std::cout << "Please enter contact informations..." << std::endl;
	std::cout << "first name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "last name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "nickname: ";
	std::getline(std::cin, this->nickname);
	std::cout << "login: ";
	std::getline(std::cin, this->login);
	std::cout << "postal address: ";
	std::getline(std::cin, this->postal_address);
	std::cout << "email address: ";
	std::getline(std::cin, this->email_address);
	std::cout << "phone number: ";
	std::getline(std::cin, this->phone_number);
	std::cout << "birthday date: ";
	std::getline(std::cin, this->birthday_date);
	std::cout << "favorite meal: ";
	std::getline(std::cin, this->favorite_meal);
	std::cout << "underwear color: ";
	std::getline(std::cin, this->underwear_color);
	std::cout << "darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
}

void	Contact::showInfos(void) {
	std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << "nickname: " <<  this->nickname << std::endl;
	std::cout << "login: " <<  this->login << std::endl;
	std::cout << "postal address: " <<  this->postal_address << std::endl;
	std::cout << "email address: " <<  this->email_address << std::endl;
	std::cout << "phone number: " <<  this->phone_number << std::endl;
	std::cout << "birthday date: " <<  this->birthday_date << std::endl;
	std::cout << "favorite meal: " <<  this->favorite_meal << std::endl;
	std::cout << "underwear color: " <<  this->underwear_color << std::endl;
	std::cout << "darkest secret: " <<  this->darkest_secret << std::endl;
}

void	Contact::_tooLong(std::string str)
{
	int i;

	i = -1;
	if (str.length() > 10)
	{
		while (++i < 9)
			std::cout << str[i];
		std::cout << ".";
	}
	else
	{
		std::cout << std::setw(10);
		std::cout << str;
	}
}

void	Contact::showInfosTable(int k)
{
	std::cout << std::setw(10);
	std::cout << k;
	std::cout << "|";
	this->_tooLong(this->first_name);
	std::cout << "|";
	this->_tooLong(this->last_name);
	std::cout << "|";
	this->_tooLong(this->nickname);
	std::cout << "" << std::endl;
}
