#include "Peon.hpp"

Peon::Peon(void) : Victim("Joe")
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::Peon(const Peon &src)
{
	*this = src;
	std::cout << "Peon copied" << std::endl;
	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon	&Peon::operator=(const Peon &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
	}
	std::cout << "Peon assigned" << std::endl;
	return (*this);
}

void		Peon::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a pink pony!" << std::endl;
	return ;
}
