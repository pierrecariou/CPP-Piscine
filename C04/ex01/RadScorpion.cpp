#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion(int hp, std::string const &type) : Enemy(hp, type)
{
	std::cout << "RadScorpion created" << std::endl;
	return ;
}

RadScorpion::RadScorpion(const RadScorpion &src)
{
	*this = src;
	std::cout << "RadScorpion copied" << std::endl;
	return ;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion	&RadScorpion::operator=(const RadScorpion &rhs)
{
	if (this != &rhs)
	{
		this->hp = rhs.hp;
		this->type = rhs.type;
	}
	std::cout << "RadScorpion assigned" << std::endl;
	return (*this);
}
