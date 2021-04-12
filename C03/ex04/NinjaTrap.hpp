#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>
# include <iostream>
# include <stdlib.h> 

class NinjaTrap : virtual public ClapTrap {
	public:
		NinjaTrap(void);
		NinjaTrap(std::string name);
		NinjaTrap(const NinjaTrap &src);
		~NinjaTrap(void);
		NinjaTrap	&operator=(const NinjaTrap &rhs);
		int		ninjaShoebox(FragTrap &enemy);
		int		ninjaShoebox(ScavTrap &enemy);
		int		ninjaShoebox(NinjaTrap &enemy);
		int		ninjaShoebox(ClapTrap &enemy);
		int		checkEnergy(void);
};

#endif
