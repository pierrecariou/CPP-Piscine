#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <string>
# include <iostream>
# include <stdlib.h>

class ZombieEvent {
	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		void		setZombieType(Zombie *zombie, std::string type);
		Zombie		*newZombie(std::string name);
		Zombie		*randomChump(void);
};

#endif
