#include "Enemy.hpp"

Enemy::Enemy(void) : hp(0), type("enemy")
{
	return ;
}

Enemy::Enemy(int hp, std::string const &type) : hp(hp), type(type)
{
	return ;
}

Enemy::Enemy(const Enemy &src)
{
	*this = src;
	std::cout << "Enemy copied" << std::endl;
	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

Enemy	&Enemy::operator=(const Enemy &rhs)
{
	if (this != &rhs)
	{
		this->hp = rhs.hp;
		this->type = rhs.type;
	}
	std::cout << "Enemy assigned" << std::endl;
	return (*this);
}

int					Enemy::getHp(void) const
{
	return this->hp;
}

std::string	const	&Enemy::getType(void) const
{
	return this->type;
}

void				Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
	this->hp-=damage;
	if (this->hp < 0)
		this->hp = 0;
}
