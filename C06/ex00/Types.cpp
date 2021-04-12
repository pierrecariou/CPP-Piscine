#include "Types.hpp"

Types::Types(void)
{
	return ;
}

Types::Types(char c, int i, float f, double d) : c(c), i(i), f(f), d(d)
{
	std::cout << "Types created" << std::endl;
	return ;
}

Types::Types(const Types &src)
{
	*this = src;
	std::cout << "Types copied" << std::endl;
	return ;
}

Types::~Types(void)
{
	return ;
}

Types	&Types::operator=(const Types &rhs)
{
	if (this != &rhs)
	{
		this->c = rhs.c;
		this->i = rhs.i;
		this->f = rhs.f;
		this->d = rhs.d;
	}
	std::cout << "Types assigned" << std::endl;
	return (*this);
}

char	Types::getC(void) const
{
	return this->c;
}

int	Types::getI(void) const
{
	return this->i;
}

float	Types::getF(void) const
{
	return this->f;
}

double	Types::getD(void) const
{
	return this->d;
}

std::ostream    &operator<<(std::ostream &o, Types const &rhs)
{
	if (rhs.ce.empty())
		o << "char: " <<  "'" << rhs.c << "'" << std::endl;
	else
		o << "char: " << rhs.ce << std::endl;
	if (rhs.ie.empty())
		o << "int: " << rhs.i << std::endl;
	else
		o << "int: " << rhs.ie << std::endl;
	if (rhs.fe.empty())
		o << "float: " << rhs.f << rhs.fdpoint << "f" << std::endl;
	else
		o << "float: " << rhs.fe <<  std::endl;
	if (rhs.de.empty())
		o << "double: " << rhs.d << rhs.fdpoint;
	else
		o << "double: " << rhs.de;
	return o;
}
