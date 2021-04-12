#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	int i;

	i = -1;
	while (++i < 4)
		this->m[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
	std::cout << "MateriaSource copied" << std::endl;
	return ;
}

MateriaSource::~MateriaSource(void)
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

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
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
	}
	std::cout << "MateriaSource assigned" << std::endl;
	return (*this);
}

void			MateriaSource::learnMateria(AMateria *m)
{
	int i;

	i = -1;
	if (m == NULL)
	{
		std::cout << "Materia you want to learn is nonexistant" << std::endl;
		return ;
	}
	while (++i < 4)
	{
		if (this->m[i] == NULL)
		{
			this->m[i] = m;
			break ;
		}
	}
	if (i == 4)
		std::cout << "Materia source is full: unable to learn" << std::endl;
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	int i;
	std::string	str;

	i = 4;
	while (--i >= 0)
	{
		if (this->m[i])
		{
			str = this->m[i]->getType();
			str[0] = tolower(this->m[i]->getType()[0]);
		}
		if (this->m[i] && str == type)
			return (this->m[i]->clone());
	}
	return (0);
}
