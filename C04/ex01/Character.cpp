#include "Character.hpp"

Character::Character(void) : name("character"), ap(0), weapon(NULL)
{
	return ;
}

Character::Character(std::string const &name) : name(name), ap(40), weapon(NULL)
{
	return ;
}

Character::Character(const Character &src)
{
	*this = src;
	std::cout << "Character copied" << std::endl;
	return ;
}

Character::~Character(void)
{
	return ;
}

Character	&Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->ap = rhs.ap;
		this->weapon = rhs.weapon;
	}
	std::cout << "Character assigned" << std::endl;
	return (*this);
}

std::string	const &Character::getName(void) const
{
	return this->name;
}

int	Character::getAp(void) const
{
	return this->ap;
}

AWeapon	*Character::getWeapon(void) const
{
	return this->weapon;
}

void	Character::recoverAP(void)
{
	this->ap+=10;
	if (this->ap > 40)
		this->ap = 40;
}

void	Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}


void	Character::attack(Enemy *enemy)
{
	if (!this->weapon || this->weapon->getApcost() > this->ap)
		return ;
	std::cout << this->name <<  " attacks "<< enemy->getType() << " with a " << this->weapon->getName() << std::endl;
	this->ap-=this->weapon->getApcost();
	this->weapon->attack();
	enemy->takeDamage(this->weapon->getDamage());
	if (enemy->getHp() == 0)
		delete enemy;
}

std::ostream    &operator<<(std::ostream &o, Character const &rhs)
{
	if (rhs.getWeapon())
		o << rhs.getName() << " has " << rhs.getAp() << " AP and wields a " << rhs.getWeapon()->getName() << std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAp() << " AP and is unarmed" << std::endl;
	return o;
}
