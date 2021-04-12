#include "Bazooka.hpp"

Bazooka::Bazooka(void) : AWeapon("Bazooka", 20, 80)
{
	return ;
}

Bazooka::Bazooka(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
	return ;
}

Bazooka::Bazooka(const Bazooka &src)
{
	*this = src;
	return ;
}

Bazooka::~Bazooka(void)
{
	return ;
}

Bazooka	&Bazooka::operator=(const Bazooka &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->apcost = rhs.apcost;
		this->damage = rhs.damage;
	}
	std::cout << "Bazooka assigned" << std::endl;
	return (*this);
}

void		Bazooka::attack(void) const
{
	std::cout << "* BOUM! *" << std::endl;	
	return ;
}
