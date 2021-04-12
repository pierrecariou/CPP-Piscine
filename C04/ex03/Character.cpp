#include "Character.hpp"

Character::Character(void) : name("name")
{
	int i;

	i = -1;
	while (++i < 4)
		this->m[i] = NULL;
	return ;
}

Character::Character(std::string name) : name(name)
{
	int i;

	i = -1;
	while (++i < 4)
		this->m[i] = NULL;
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
	int i;

	i = -1;
	while (++i < 4)
	{
		if (this->m[i])
			delete this->m[i];
	}
	return ;
}

Character	&Character::operator=(const Character &rhs)
{
	int i;

	i = -1;
	if (this != &rhs)
	{
		while (++i < 4)
		{
			if (this->m[i])
				delete this->m[i];
		}
		i = -1;
		while (++i < 4)
			this->m[i] = rhs.m[i];
		this->name = rhs.name;
	}
	std::cout << "Character assigned" << std::endl;
	return (*this);
}

std::string	const &Character::getName(void) const
{
	return this->name;
}

void	Character::equip(AMateria* m)
{
	int i;

	i = -1;
	if (m == NULL)
	{
		std::cout << "Materia you want to equip is nonexistant" << std::endl;
		return ;
	}
	while (++i < 4)
	{
		if (!this->m[i])
		{
			this->m[i] = m;
			break ;
		}
	}
	if (i == 4)
		std::cout << "Character is full: unable to equip" << std::endl;
}

void	Character::unequip(int idx)
{
	int i;

	i = 0;
	if (idx > 3 || idx < 0)
	{
		std::cout << "Cannot unequip: index out of range" << std::endl;
		return ;
	}
	if (idx <= 3 && idx >= 0 && !this->m[idx])
	{
		std::cout << "Cannot unequip: Materia is nonexistant" << std::endl;
		return ;
	}
	while (idx < 3)
	{
		this->m[idx] = this->m[idx + 1];
		idx++;
	}
	this->m[idx] = NULL;
}

void	Character::use(int idx, ICharacter	&target)
{
	if (idx > 3 || idx < 0)
	{
		std::cout << "Cannot use: index out of range" << std::endl;
		return ;
	}
	if (idx <= 3 && idx >= 0 && !this->m[idx])
	{
		std::cout << "Cannot use: Materia is nonexistant" << std::endl;
		return ;
	}
	this->m[idx]->use(target);
}
