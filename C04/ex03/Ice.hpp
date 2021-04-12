#ifndef ICE_HPP
# define ICE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice(void);
		Ice(std::string const &name);
		Ice(const Ice &src);
		virtual ~Ice(void);
		virtual Ice	&operator=(const Ice &rhs);
		std::string	const &getName(void) const;
		virtual AMateria	*clone() const;

	private:
		std::string	const &name;
};

#endif
