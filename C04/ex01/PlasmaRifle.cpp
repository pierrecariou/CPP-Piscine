#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

PlasmaRifle::PlasmaRifle(std::string const &name, int apcost, int damage) : AWeapon(name, apcost, damage)
{
	return ;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src)
{
	*this = src;
	std::cout << "PlasmaRifle copied" << std::endl;
	return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}

PlasmaRifle	&PlasmaRifle::operator=(const PlasmaRifle &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->apcost = rhs.apcost;
		this->damage = rhs.damage;
	}
	std::cout << "PlasmaRifle assigned" << std::endl;
	return (*this);
}

void		PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;	
	return ;
}
