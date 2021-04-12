#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <string>
# include <iostream>
# include <stdlib.h>

class ZombieHorde {
	public:
		ZombieHorde(int n);
		~ZombieHorde(void);
		Zombie	*getZombies(void);
		void	announce(void);
	private:
		Zombie	*zombies;
		int		n;
};

#endif
