#include "Cure.hpp"

std::string const	&strc = "cure";

Cure::Cure(void) : AMateria("Cure"), name(strc)
{
	return ;
}

Cure::Cure(const Cure &src) : AMateria("Cure"), name(strc)
{
	*this = src;
	std::cout << "Cure copied" << std::endl;
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure	&Cure::operator=(const Cure &rhs)
{
	if (this != &rhs)
		std::cout << "Cure assigned" << std::endl;
	else
		std::cout << "Cure assigned" << std::endl;
	return (*this);
}

std::string	const &Cure::getName(void) const
{
	return this->name;
}

AMateria	*Cure::clone() const
{
	AMateria	*cure = new Cure();
	return (cure);
}
