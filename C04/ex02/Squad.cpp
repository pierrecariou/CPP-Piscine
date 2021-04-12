#include "Squad.hpp"

Squad::Squad(void) : count(0), units(new t_units)
{
	units->unit = NULL;
	units->next = NULL;
	std::cout << "Squad created" << std::endl;
	return ;
}

Squad::Squad(int count, t_units	*units) : count(count), units(units)
{
	std::cout << "Squad created" << std::endl;
	return ;
}

Squad::Squad(const Squad &src)
{
	*this = src;
	std::cout << "Squad copied" << std::endl;
	return ;
}

Squad::~Squad(void)
{
	t_units	*cp;
	while (this->units && this->units->unit)
	{
		cp = this->units;
		delete this->units->unit;
		this->units = this->units->next;
		delete cp;
	}
	std::cout << "Squad deleted" << std::endl;
	return ;
}

int		Squad::check_repet(const Squad &rhs) const
{
	t_units	*cp;
	t_units	*cp1;
	t_units	*b;

	cp = this->units;
	cp1 = rhs.units;
	b = cp1;
	while (cp && cp->unit)
	{
		while (cp1 && cp1->unit)
		{
			if (cp1->unit == cp->unit)
				return (1);
			cp1 = cp1->next;
		}
		cp1 = b;
		cp = cp->next;
	}
	return (0);
}

Squad	&Squad::operator=(const Squad &rhs)
{
	t_units	*b;
	t_units *cp;
	t_units *cprhs;

	if (this->check_repet(rhs))
	{
		std::cout << "Impossible assignation: the two squads share identical units" << std::endl;
		return (*this);
	}
	cprhs = rhs.units;
	if (this != &rhs)
	{
		while (this->units && this->units->unit)
		{
			cp = this->units;
			delete this->units->unit;
			this->units = this->units->next;
			delete cp;
		}
		if (!this->units)
		{
			this->units = new t_units;
			this->units->unit = NULL;
			this->units->next = NULL;
		}
		b = this->units;
		while (cprhs && cprhs->unit)
		{
			if (cprhs != rhs.units)
			{
				b->next = new t_units;
				b = b->next;
			}
			b->unit = cprhs->unit->clone();
			b->next = NULL;
			cprhs = cprhs->next; 
		}
		this->count = rhs.count;
	}
	std::cout << "Squad assigned" << std::endl;
	return (*this);
}

int	Squad::getCount(void) const
{
	return this->count;
}

ISpaceMarine	*Squad::getUnit(int index) const
{
	int i;
	t_units	*cp;

	cp = this->units;
	i = 0;
	while (cp && cp->unit)
	{
		if (i == index)
			return (cp->unit);
		cp = cp->next;
		i++;	
	}
	std::cout << "Unit does not exists" << std::endl;
	return (NULL);
}

int				Squad::push(ISpaceMarine *spacemarine)
{
	if (!this->units->unit)
	{
		this->units->unit = spacemarine;
		this->count++;
		return (this->count);
	}
	t_units *cp;
	t_units	*front = new t_units;

	cp = this->units;
	if (spacemarine == NULL || spacemarine == this->units->unit)
	{
		std::cout << "Invalid Space Marine" << std::endl;
		delete front;
		return (this->count);
	}
	while (cp->next)
	{
		if (spacemarine == cp->unit)
		{
			std::cout << "Invalid Space Marine" << std::endl;
			delete front;
			return (this->count);
		}
		cp = cp->next;
	}
	if (spacemarine == cp->unit)
	{
		std::cout << "Invalid Space Marine" << std::endl;
		delete front;
		return (this->count);
	}
	cp->next = front;
	front->unit = spacemarine;
	front->next = NULL;
	this->count++;
	return (this->count);
}
