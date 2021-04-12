#include "Zombie.hpp"

Zombie::Zombie(void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " going back with the deads" << std::endl;
	return ;
}

std::string	Zombie::getType(void)
{
	return this->type;
}

std::string	Zombie::getName(void)
{
	return this->name;
}

void		Zombie::setType(std::string type)
{
	this->type = type;
	return ;
}

void		Zombie::setName(std::string name)
{
	this->name = name;
	return ;
}

void		Zombie::advert(void)
{
	std::cout << "<" << this->name <<" (" << this->type << ")>" << " Braiiiiiiinnnssss ..." << std::endl; 
}

void		Zombie::announce(void)
{
	std::cout << "Zombie " << this->name <<" coming back from the deads" << std::endl; 
}

int			Zombie::getNbInstRand(void)
{
	Zombie::_nbInstRand++;
	return Zombie::_nbInstRand;
}

int			Zombie::_nbInstRand = 0;
