#include "Victim.hpp"

Victim::Victim(void) : name("Jimmy")
{
	std::cout << "Some random victim called "<< this->name << " just appeared!" << std::endl;
	return ;
}

Victim::Victim(std::string name) : name(name)
{
	std::cout << "Some random victim called "<< this->name << " just appeared!" << std::endl;
	return ;
}

Victim::Victim(const Victim &src)
{
	*this = src;
	std::cout << "Victim copied" << std::endl;
	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->name <<" just died for no apparent reason!" << std::endl;
	return ;
}

Victim	&Victim::operator=(const Victim &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
	}
	std::cout << "Victim assigned" << std::endl;
	return (*this);
}

std::string	Victim::getName(void) const
{
	return this->name;
}

void		Victim::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a cute little sheep!" << std::endl;
	return ;
}

std::ostream	&operator<<(std::ostream &o, Victim const &rhs)
{
	o << "I'm " << rhs.getName() << " and I like otters!" << std::endl;
	return o;
}
