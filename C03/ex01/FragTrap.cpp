#include "FragTrap.hpp"

FragTrap::FragTrap(void) : hp(100), hpmax(100), energy(100), energymax(100), lvl(1), name("John"), atkmelee(30), atkranged(20), armor(5)
{
	std::cout << "FragTrap "<< this->name << " ready to fight!" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : hp(100), hpmax(100), energy(100), energymax(100), lvl(1), name(name), atkmelee(30), atkranged(20), armor(5)
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

void	FragTrap::rangedAttack(std::string const &target)
{	
	std::cout << "FragTrap " << this->name << " attacks "<< target << " at range" << std::endl;
	return ;
}

void	FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FragTrap " << this->name << " melee attacks "<< target  << std::endl;
	return ;
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

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
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

int	FragTrap::getHp(void) const
{
	return this->hp;
}

int	FragTrap::getHpmax(void) const
{
	return this->hpmax;
}

int	FragTrap::getEnergy(void) const
{
	return this->energy;
}

int	FragTrap::getEnergymax(void) const
{
	return this->energymax;
}

int	FragTrap::getLvl(void) const
{
	return this->lvl;
}

std::string	FragTrap::getName(void) const
{
	return this->name;
}

int	FragTrap::getAtkmelee(void) const
{
	return this->atkmelee;
}

int	FragTrap::getAtkranged(void) const
{
	return this->atkranged;
}

int	FragTrap::getArmor(void) const
{
	return this->armor;
}
