#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::PowerFist(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
	return ;
}

PowerFist::PowerFist(const PowerFist &src)
{
	*this = src;
	std::cout << "PowerFist copied" << std::endl;
	return ;
}

PowerFist::~PowerFist(void)
{
	return ;
}

PowerFist	&PowerFist::operator=(const PowerFist &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->apcost = rhs.apcost;
		this->damage = rhs.damage;
	}
	std::cout << "PowerFist assigned" << std::endl;
	return (*this);
}

void		PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;	
	return ;
}
