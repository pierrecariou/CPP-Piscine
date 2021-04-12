#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	std::cout << "HumanB created" << std::endl;
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB deleted" << std::endl;
	return ;
}

Weapon	HumanB::getWeapon(void)
{
	return *this->weapon;
}

std::string	HumanB::getName(void)
{
	return this->name;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	return ;
}
