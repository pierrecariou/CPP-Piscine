#include "Ice.hpp"

std::string const	&stri = "ice";

Ice::Ice(void) : AMateria("Ice"), name(stri)
{
	return ;
}

Ice::Ice(const Ice &src) : AMateria("Ice"), name(stri)
{
	*this = src;
	std::cout << "Ice copied" << std::endl;
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice	&Ice::operator=(const Ice &rhs)
{
	if (this != &rhs)
		std::cout << "Ice assigned" << std::endl;
	else
		std::cout << "Ice assigned" << std::endl;
	return (*this);
}

std::string	const	&Ice::getName(void) const
{
	return this->name;
}

AMateria	*Ice::clone() const
{
	AMateria	*ice = new Ice();
	return (ice);
}
