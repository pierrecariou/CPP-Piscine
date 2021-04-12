#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(100, 100, 100, 100, 1, "John", 30, 20, 5, "FragTrap")
{
	std::cout << "FragTrap "<< this->name << " ready to fight!" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5, "FragTrap")
{
	std::cout << "FragTrap " << this->name << " ready to fight!" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &src)
{
	*this = src;
	std::cout << "FragTrap copied" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->name << " run away from combat" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	if (this != &rhs)
	{
		this->hp = rhs.hp;
		this->hpmax = rhs.hpmax;
		this->energy = rhs.energy;
		this->energymax = rhs.energymax;
		this->lvl = rhs.lvl;
		this->name = rhs.name;
		this->atkmelee = rhs.atkmelee;
		this->atkranged = rhs.atkranged;
		this->armor = rhs.armor;
	}
	std::cout << "FragTrap assigned" << std::endl;
	return (*this);
}

int		FragTrap::insult(std::string const &target)
{
		std::cout << this->name << " attacks " << target << " with an insult and makes him loosing confidence" << std::endl;
		return (10);
}

int		FragTrap::scratch(std::string const &target)
{
	std::cout << this->name << " savagely scratch " << target << " with his fingernails and hurt him so bad :O" << std::endl;
	return (40);
}

int		FragTrap::combo(std::string const &target)
{
	std::cout << this->name << " attacks " << target << " with a special combo he learned from his highschool sport's teacher" << std::endl;
	return (35);
}

int		FragTrap::kick(std::string const &target)
{
	std::cout << this->name << " just high kicked " << target << " in the knee?!" << std::endl;
	return (20);
}

int		FragTrap::gun(std::string const &target)
{
	std::cout << this->name << " shoot at " << target << " with a gun" << std::endl;
	return (50);
}

int		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int	const	attacks[5] = {1, 2, 3, 4, 5};	
	int			index;

	index = rand() % 5;	
	if (this->getEnergy() < 25)
	{
		std::cout << this->name << " has no energy left" << std::endl;
		return (-1);
	}
	else
		this->energy-=25;
	if (attacks[index] == 1)
		return (this->insult(target));
	else if (attacks[index] == 2)
		return (this->scratch(target));
	else if (attacks[index] == 3)
		return (this->combo(target));
	else if (attacks[index] == 4)
		return (this->kick(target));
	else if (attacks[index] == 5)
		return (this->gun(target));
	return (-1);
}
