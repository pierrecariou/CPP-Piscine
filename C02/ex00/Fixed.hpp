#ifndef FIXED_HPP
# define FIXED_HPP

# include <string>
# include <iostream>

class Fixed {
	public:
		Fixed(void);
		Fixed(int const fpoint);
		Fixed(const Fixed &src);
		~Fixed(void);
		Fixed	&operator=(const Fixed &rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const fpoint);
		static int		getBits(void);

	private:
		int					fpoint;
		static const int	bits;
};

#endif
