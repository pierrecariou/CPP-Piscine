#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine(const TacticalMarine &src)
{
	*this = src;
	std::cout << "TacticalMarine copied" << std::endl;
	return ;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh..." << std::endl;
	return ;
}

TacticalMarine	&TacticalMarine::operator=(const TacticalMarine &rhs)
{
	if (this != &rhs)
		std::cout << "TacticalMarine assigned" << std::endl;
	else
		std::cout << "TacticalMarine assigned" << std::endl;
	return (*this);
}

ISpaceMarine*	TacticalMarine::clone() const
{
	ISpaceMarine *cp = new TacticalMarine;
	return cp;
}

void	TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void	TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}
