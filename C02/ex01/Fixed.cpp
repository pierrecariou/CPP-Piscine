#include "Fixed.hpp"

Fixed::Fixed(void) : fpoint(0)
{
	std::cout << "Fixed created" << std::endl;
	return ;
}

Fixed::Fixed(int const fpoint) : fpoint(fpoint << Fixed::bits)
{
	std::cout << "Fixed created" << std::endl;
	return ;
}

Fixed::Fixed(float const fpoint) : fpoint(roundf(fpoint * (1 << Fixed::bits)))
{
	std::cout << "Fixed created" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &src) : fpoint(0)
{
	*this = src;
	std::cout << "Fixed copied" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Fixed deleted" << std::endl;
	return ;
}

Fixed		&Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		this->fpoint = rhs.getRawBits();
	std::cout << "Fixed assigned" << std::endl;
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return this->fpoint;
}

void	Fixed::setRawBits(int const fpoint)
{
	this->fpoint = fpoint;
}

int		Fixed::getBits(void)
{
	std::cout << "getBits called" << std::endl;
	return Fixed::bits;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->fpoint / (float)(1 << Fixed::bits));
}

int		Fixed::toInt(void) const
{
	return (this->fpoint >> Fixed::bits);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

int const Fixed::bits = 8;
