#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << this->name << " is feeling good"<< std::endl;
	return ;
}

ClapTrap::ClapTrap(int hp, int hpmax, int energy, int energymax, int lvl, std::string name, int atkmelee, int atkranged, int armor, std::string trap) : hp(hp), hpmax(hpmax), energy(energy), energymax(energymax), lvl(lvl), name(name), atkmelee(atkmelee), atkranged(atkranged), armor(armor), trap(trap)
{
	std::cout << this->name << " is feeling good"<< std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << "ClapTrap copied" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->name << " doesn't want to fight anymore..." << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
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
	std::cout << "ClapTrap assigned" << std::endl;
	return (*this);
}

void	ClapTrap::rangedAttack(std::string const &target)
{	
	std::cout << this->trap << " " << this->name << " attacks "<< target << " at range" << std::endl;
	return ;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << this->trap << " " << this->name << " melee attacks "<< target  << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
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

void	ClapTrap::beRepaired(unsigned int amount)
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

int	ClapTrap::getHp(void) const
{
	return this->hp;
}

int	ClapTrap::getHpmax(void) const
{
	return this->hpmax;
}

int	ClapTrap::getEnergy(void) const
{
	return this->energy;
}

int	ClapTrap::getEnergymax(void) const
{
	return this->energymax;
}

int	ClapTrap::getLvl(void) const
{
	return this->lvl;
}

std::string	ClapTrap::getName(void) const
{
	return this->name;
}

int	ClapTrap::getAtkmelee(void) const
{
	return this->atkmelee;
}

int	ClapTrap::getAtkranged(void) const
{
	return this->atkranged;
}

int	ClapTrap::getArmor(void) const
{
	return this->armor;
}
