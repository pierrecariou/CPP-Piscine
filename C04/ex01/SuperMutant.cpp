#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return ;
}

SuperMutant::SuperMutant(int hp, std::string const &type) : Enemy(hp, type)
{
	std::cout << "SuperMutant created" << std::endl;
	return ;
}

SuperMutant::SuperMutant(const SuperMutant &src)
{
	*this = src;
	std::cout << "SuperMutant copied" << std::endl;
	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

SuperMutant	&SuperMutant::operator=(const SuperMutant &rhs)
{
	if (this != &rhs)
	{
		this->hp = rhs.hp;
		this->type = rhs.type;
	}
	std::cout << "SuperMutant assigned" << std::endl;
	return (*this);
}

void				SuperMutant::takeDamage(int damage)
{
	if (damage - 3 < 0)
		return ;
	this->hp-=(damage - 3);
	if (this->hp < 0)
		this->hp = 0;
}
