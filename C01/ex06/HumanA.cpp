#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	std::cout << "HumanA created" << std::endl;
	return ;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA deleted" << std::endl;
	return ;
}

Weapon	HumanA::getWeapon(void)
{
	return this->weapon;
}

std::string	HumanA::getName(void)
{
	return this->name;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
	return ;
}
