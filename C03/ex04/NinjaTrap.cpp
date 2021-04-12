#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap(60, 60, 120, 120, 1, "John", 60, 5, 0, "NinjaTrap")
{
	std::cout << "And 50% NinjaTrap..." << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0, "NinjaTrap")
{
	std::cout << "And 50% NinjaTrap..." << std::endl;
	return ;
}

NinjaTrap::NinjaTrap(const NinjaTrap &src)
{
	*this = src;
	std::cout << "NinjaTrap copied" << std::endl;
	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "His Ninja part is hurt" << std::endl;
	return ;
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &rhs)
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
	std::cout << "NinjaTrap assigned" << std::endl;
	return (*this);
}

int		NinjaTrap::checkEnergy(void)
{
	if (this->getEnergy() < 25)
	{
		std::cout << this->name << " has no energy left" << std::endl;
		return (0);
	}
	else
		this->energy-=25;
	return (1);
}

int		NinjaTrap::ninjaShoebox(FragTrap &enemy)
{
		if (!this->checkEnergy())	
			return (-1);
		std::cout << this->name << " attacks " << enemy.getName() << " with a classic shuriken (very simple technic very efficient)" << std::endl;
		return (30);
}

int		NinjaTrap::ninjaShoebox(ScavTrap &enemy)
{
		if (!this->checkEnergy())	
			return (-1);
		std::cout << this->name << " attacks " << enemy.getName() << " with \"ko ashi\" technic (called \"pied du tigre\" by the ancients)" << std::endl;
		return (40);
}

int		NinjaTrap::ninjaShoebox(NinjaTrap &enemy)
{
		if (!this->checkEnergy())	
			return (-1);
		std::cout << this->name << " attacks " << enemy.getName() << " with no conviction (they where at school together)" << std::endl;
		return (5);
}

int		NinjaTrap::ninjaShoebox(ClapTrap &enemy)
{
		if (!this->checkEnergy())	
			return (-1);
		std::cout << this->name << " just get 16 yrs old this year and attacks his parent " << enemy.getName() << std::endl;
		return (20);
}
