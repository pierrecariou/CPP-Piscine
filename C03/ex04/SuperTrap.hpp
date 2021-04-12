#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"
# include "ClapTrap.hpp"
# include <string>
# include <iostream>
# include <stdlib.h> 

class SuperTrap : public FragTrap, public NinjaTrap {
	public:
		SuperTrap(void);
		SuperTrap(std::string name);
		SuperTrap(const SuperTrap &src);
		~SuperTrap(void);
		SuperTrap	&operator=(const SuperTrap &rhs);
};

#endif
