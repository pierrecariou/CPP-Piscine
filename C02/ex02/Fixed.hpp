#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(int const fpoint);
		Fixed(float const fpoint);
		Fixed(const Fixed &src);
		~Fixed(void);
		Fixed	&operator=(const Fixed &rhs);
		int		operator>(const Fixed &rhs) const;
		int		operator<(const Fixed &rhs) const;
		int		operator>=(const Fixed &rhs) const;
		int		operator<=(const Fixed &rhs) const;
		int		operator==(const Fixed &rhs) const;
		int		operator!=(const Fixed &rhs) const;
		Fixed	operator+(const Fixed &rhs) const;
		Fixed	operator-(const Fixed &rhs) const;
		Fixed	operator*(const Fixed &rhs) const;
		Fixed	operator/(const Fixed &rhs) const;
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		int		getRawBits(void) const;
		void	setRawBits(int const fpoint);
		static int	getBits(void);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed	&max(Fixed &rhs1, Fixed &rhs2);
		static Fixed	&min(Fixed &rhs1, Fixed &rhs2);
		static const Fixed	&max(const Fixed &rhs1, const Fixed &rhs2);
		static const Fixed	&min(const Fixed &rhs1, const Fixed &rhs2);

	private:
		int					fpoint;
		static const int	bits;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif
