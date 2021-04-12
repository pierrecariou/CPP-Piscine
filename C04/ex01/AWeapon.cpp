#include "AWeapon.hpp"

AWeapon::AWeapon(void) : name("weapon"), apcost(0), damage(0)
{
	return ;
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : name(name), apcost(apcost), damage(damage)
{
	return ;
}

AWeapon::AWeapon(const AWeapon &src)
{
	*this = src;
	std::cout << "AWeapon copied" << std::endl;
	return ;
}

AWeapon::~AWeapon(void)
{
	return ;
}

AWeapon	&AWeapon::operator=(const AWeapon &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->apcost = rhs.apcost;
		this->damage = rhs.damage;
	}
	std::cout << "AWeapon assigned" << std::endl;
	return (*this);
}

std::string	const &AWeapon::getName(void) const
{
	return this->name;
}

int	AWeapon::getApcost(void) const
{
	return this->apcost;
}

int	AWeapon::getDamage(void) const
{
	return this->damage;
}
