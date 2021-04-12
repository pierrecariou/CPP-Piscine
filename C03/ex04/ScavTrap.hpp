#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>
# include <iostream>
# include <stdlib.h>

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		~ScavTrap(void);
		ScavTrap	&operator=(const ScavTrap &rhs);
		int		shoot(std::string const &target);
		int		hand(std::string const &target);
		int		jump(std::string const &target);
		int		tongue(std::string const &target);
		int		kiss(std::string const &target);
		int		challengeNewcomer(std::string const &target);
};

#endif
