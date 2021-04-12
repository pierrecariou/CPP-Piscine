#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : hp(100), hpmax(100), energy(50), energymax(50), lvl(1), name("John"), atkmelee(20), atkranged(15), armor(3)
{
	std::cout << "ScavTrap "<< this->name << " ready to fight!" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : hp(100), hpmax(100), energy(50), energymax(50), lvl(1), name(name), atkmelee(20), atkranged(15), armor(3)
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

void	ScavTrap::rangedAttack(std::string const &target)
{	
	std::cout << "ScavTrap " << this->name << " attacks "<< target << " at range" << std::endl;
	return ;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "ScavTrap " << this->name << " melee attacks "<< target  << std::endl;
	return ;
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

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->hp > (int)amount - this->armor)
	{
		this->hp-=((int)amount - this->armor);
		std::cout << this->name << " suffers "<< (int)amount - this->armor << " damage points and gets down to " << this->hp << " hp" <<std::endl;
	}
	else
	{
		std::cout << "😵" << " \"KO technique\" for "<< this->name << " who suffered "<< this->hp << " damage points in his last moments" << std::endl;
		this->hp = 0;
	}
	return ;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->hp == this->hpmax)
		std::cout << this->name << "has already the maximum hp" << std::endl;
	else if (this->hp + (int)amount > this->hpmax)
	{
		std::cout << this->name << " healed himself of "<< this->hpmax - this->hp << " hp and has now 100 hp!" << std::endl;
		this->hp = this->hpmax;

	}
	else
	{
		this->hp+=amount;
		std::cout << this->name << " healed himself of "<< amount << " hp and has now " << this->hp << " hp" << std::endl;
	}
	return ;
}

int	ScavTrap::getHp(void) const
{
	return this->hp;
}

int	ScavTrap::getHpmax(void) const
{
	return this->hpmax;
}

int	ScavTrap::getEnergy(void) const
{
	return this->energy;
}

int	ScavTrap::getEnergymax(void) const
{
	return this->energymax;
}

int	ScavTrap::getLvl(void) const
{
	return this->lvl;
}

std::string	ScavTrap::getName(void) const
{
	return this->name;
}

int	ScavTrap::getAtkmelee(void) const
{
	return this->atkmelee;
}

int	ScavTrap::getAtkranged(void) const
{
	return this->atkranged;
}

int	ScavTrap::getArmor(void) const
{
	return this->armor;
}
