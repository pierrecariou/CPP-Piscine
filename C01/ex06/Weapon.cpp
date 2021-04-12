#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
	std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon deleted" << std::endl;
}

const std::string	&Weapon::getType(void) const
{
	return this->type;
}

void		Weapon::setType(std::string type)
{
	this->type = type;
}
