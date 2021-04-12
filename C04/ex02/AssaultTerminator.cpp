#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src)
{
	*this = src;
	std::cout << "AssaultTerminator copied" << std::endl;
	return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I'll be back..." << std::endl;
	return ;
}

AssaultTerminator	&AssaultTerminator::operator=(const AssaultTerminator &rhs)
{
	if (this != &rhs)
		std::cout << "AssaultTerminator assigned" << std::endl;
	else
		std::cout << "AssaultTerminator assigned" << std::endl;
	return (*this);
}

ISpaceMarine*	AssaultTerminator::clone() const
{
	ISpaceMarine *cp = new AssaultTerminator;
	return cp;
}

void	AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void	AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void	AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
