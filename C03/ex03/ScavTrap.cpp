#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(100, 100, 50, 50, 1, "John", 20, 15, 3, "ScavTrap")
{
	std::cout << "ScavTrap "<< this->name << " ready to fight!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3, "ScavTrap")
{
	std::cout << "ScavTrap " << this->name << " ready to fight!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
	std::cout << "ScavTrap copied" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->name << " run away from combat" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
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
	std::cout << "ScavTrap assigned" << std::endl;
	return (*this);
}

int		ScavTrap::shoot(std::string const &target)
{
		std::cout << this->name << " challenges " << target << ": You're not able to endure the pain of shooting at you...Ok you're able..." << std::endl;
		return (70);
}

int		ScavTrap::hand(std::string const &target)
{
	std::cout << this->name << " challenges " << target << ": You can't beat me with one hand!...Oh you cut your hand this is so stupid..." << std::endl;
	return (50);
}

int		ScavTrap::jump(std::string const &target)
{
	std::cout << this->name << " challenges " << target << ": You're not able to jump through the window...You got lucky it was only third floor...Come back now, fight is not yet over!" << std::endl;
	return (45);
}

int		ScavTrap::tongue(std::string const &target)
{
	std::cout << this->name << " challenges " << target << ": You can't touch your ears with your tongue!...Haha this is your nose, you're so bad! (enemy mentally affected is crying)" << std::endl;
	return (20);
}

int		ScavTrap::kiss(std::string const &target)
{
	std::cout << this->name << " challenges " << target << ": You're not able to kiss this girl...Told you!...Didn't think she will slap you that bad haha" << std::endl;
	return (40);
}

int		ScavTrap::challengeNewcomer(std::string const &target)
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
		return (this->shoot(target));
	else if (attacks[index] == 2)
		return (this->hand(target));
	else if (attacks[index] == 3)
		return (this->jump(target));
	else if (attacks[index] == 4)
		return (this->tongue(target));
	else if (attacks[index] == 5)
		return (this->kiss(target));
	return (-1);
}
