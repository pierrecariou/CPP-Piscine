#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : FragTrap("John"), NinjaTrap("John")
{
	std::cout << "SuperTrap "<< this->name << " ready to fight!" << std::endl;
	return ;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5, "SuperTrap"), FragTrap(name), NinjaTrap(name)
{
	std::cout << "SuperTrap " << this->name << " ready to fight!" << std::endl;
	return ;
}

SuperTrap::SuperTrap(const SuperTrap &src)
{
	*this = src;
	std::cout << "SuperTrap copied" << std::endl;
	return ;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "SuperTrap " << this->name << " run away from combat" << std::endl;
	return ;
}

SuperTrap	&SuperTrap::operator=(const SuperTrap &rhs)
{
	if (this != &rhs)
	{
		this->hp = rhs.hp;
		this->hpmax = rhs.hpmax;
		this->energy = rhs.energy;
		this->energymax = rhs.energymax;
		this->lvl = rhs.lvl;
		this->name = rhs.name;
		this->atkmelee = rhs.atkmelee;
		this->atkranged = rhs.atkranged;
		this->armor = rhs.armor;
	}
	std::cout << "SuperTrap assigned" << std::endl;
	return (*this);
}
