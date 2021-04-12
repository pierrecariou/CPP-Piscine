#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>
# include <stdlib.h> 

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		~FragTrap(void);
		FragTrap	&operator=(const FragTrap &rhs);
		int		insult(std::string const &target);
		int		scratch(std::string const &target);
		int		combo(std::string const &target);
		int		kick(std::string const &target);
		int		gun(std::string const &target);
		int		vaulthunter_dot_exe(std::string const &target);
};

#endif
