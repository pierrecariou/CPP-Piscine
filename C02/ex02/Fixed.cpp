#include "Fixed.hpp"

Fixed::Fixed(void) : fpoint(0)
{
	return ;
}

Fixed::Fixed(int const fpoint) : fpoint(fpoint << Fixed::bits)
{
	return ;
}

Fixed::Fixed(float const fpoint) : fpoint(roundf(fpoint * (1 << Fixed::bits)))
{
	return ;
}

Fixed::Fixed(const Fixed &src) : fpoint(0)
{
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed		&Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		this->fpoint = rhs.getRawBits();
	return (*this);
}

int			Fixed::operator>(const Fixed &rhs) const
{
	if (this->fpoint > rhs.fpoint)
		return (1);
	return (0);
}

int			Fixed::operator<(const Fixed &rhs) const
{
	if (this->fpoint < rhs.fpoint)
		return (1);
	return (0);
}

int			Fixed::operator>=(const Fixed &rhs) const
{
	if (this->toFloat() >= rhs.toFloat())
		return (1);
	return (0);
}

int			Fixed::operator<=(const Fixed &rhs) const
{
	if (this->toFloat() <= rhs.toFloat())
		return (1);
	return (0);
}

int			Fixed::operator==(const Fixed &rhs) const
{
	if (this->toFloat() == rhs.toFloat())
		return (1);
	return (0);
}

int			Fixed::operator!=(const Fixed &rhs) const
{
	if (this->toFloat() > rhs.toFloat())
		return (1);
	return (0);
}

Fixed		Fixed::operator+(const Fixed &rhs) const
{
	Fixed	ret(this->toFloat() + rhs.toFloat());

	return (ret);
}

Fixed		Fixed::operator-(const Fixed &rhs) const
{
	Fixed	ret(this->toFloat() - rhs.toFloat());
	return (ret);
}

Fixed		Fixed::operator*(const Fixed &rhs) const
{
	Fixed	ret(this->toFloat() * rhs.toFloat());
	return (ret);
}

Fixed		Fixed::operator/(const Fixed &rhs) const
{
	Fixed	ret(this->toFloat() / rhs.toFloat());
	return (ret);
}

Fixed		&Fixed::operator++(void)
{
	this->fpoint+=1;
	return (*this);
}

Fixed		Fixed::operator++(int)
{
	Fixed	ret(*this);

	this->fpoint+=1;
	return (ret);
}

Fixed		&Fixed::operator--(void)
{
	this->fpoint-=1;
	return (*this);
}

Fixed		Fixed::operator--(int)
{
	Fixed	ret(*this);

	this->fpoint-=1;
	return (ret);
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

Fixed				&Fixed::max(Fixed &rhs1, Fixed &rhs2)
{
	if (rhs1 >= rhs2)
		return (rhs1);
	return (rhs2);
}

Fixed				&Fixed::min(Fixed &rhs1, Fixed &rhs2)
{
	if (rhs1 <= rhs2)
		return (rhs1);
	return (rhs2);
}

const Fixed				&Fixed::max(const Fixed &rhs1, const Fixed &rhs2)
{
	if (rhs1 >= rhs2)
		return (rhs1);
	return (rhs2);
}

const Fixed				&Fixed::min(const Fixed &rhs1, const Fixed &rhs2)
{
	if (rhs1 <= rhs2)
		return (rhs1);
	return (rhs2);
}

int const Fixed::bits = 8;
