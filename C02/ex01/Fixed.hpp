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
		int		getRawBits(void) const;
		void	setRawBits(int const fpoint);
		static int		getBits(void);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					fpoint;
		static const int	bits;
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif
