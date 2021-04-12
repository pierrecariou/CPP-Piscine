#ifndef TYPES_HPP
# define TYPES_HPP

# include <string>
# include <iostream>

class Types {
	public:
		Types(void);
		Types(char c, int i, float f, double d);
		Types(const Types &src);
		~Types(void);
		Types	&operator=(const Types &rhs);
		char	getC(void) const;
		int	getI(void) const;
		float	getF(void) const;
		double	getD(void) const;

		char	c;
		int	i;
		float	f;
		double	d;
		std::string	ce;
		std::string	ie;
		std::string	fe;
		std::string	de;
		std::string fdpoint;
};

std::ostream    &operator<<(std::ostream &o, Types const &rhs);

#endif
