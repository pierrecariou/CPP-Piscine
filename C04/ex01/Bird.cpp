#include "Bird.hpp"

Bird::Bird(void) : Enemy(20, "Bird")
{
	std::cout << "* cui cui *" << std::endl;
	return ;
}

Bird::Bird(int hp, std::string const &type) : Enemy(hp, type)
{
	std::cout << "Bird created" << std::endl;
	return ;
}

Bird::Bird(const Bird &src)
{
	*this = src;
	std::cout << "Bird copied" << std::endl;
	return ;
}

Bird::~Bird(void)
{
	std::cout << "* ... *" << std::endl;
	return ;
}

Bird	&Bird::operator=(const Bird &rhs)
{
	if (this != &rhs)
	{
		this->hp = rhs.hp;
		this->type = rhs.type;
	}
	std::cout << "Bird assigned" << std::endl;
	return (*this);
}
