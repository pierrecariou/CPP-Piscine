#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type), xp(0)
{
	return ;
}

AMateria::AMateria(const AMateria &src) : type(src.type)
{
	*this = src;
	std::cout << "AMateria copied" << std::endl;
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	if (this != &rhs)
	{
		this->xp = rhs.xp;
	}
	std::cout << "AMateria assigned" << std::endl;
	return (*this);
}

std::string	const	&AMateria::getType(void) const
{
	return this->type;
}

unsigned int		AMateria::getXp(void) const
{
	return this->xp;
}

void				AMateria::use(ICharacter& target)
{
	this->xp+=10;	
	if (this->type == "Ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (this->type == "Cure")
		std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
