#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
	std::cout << this->name << ", " << this->title << ", is born!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(const Sorcerer &src)
{
	*this = src;
	std::cout << "Sorcerer copied" << std::endl;
	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
	return ;
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->title = rhs.title;
	}
	std::cout << "Sorcerer assigned" << std::endl;
	return (*this);
}

std::string	Sorcerer::getName(void) const
{
	return this->name;
}

std::string	Sorcerer::getTitle(void) const
{
	return this->title;
}

void		Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
	return ;
}

std::ostream	&operator<<(std::ostream &o, Sorcerer const &rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies!" << std::endl;
	return o;
}
