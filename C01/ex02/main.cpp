#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
	int	i;
	Zombie		*zombie[4];
	ZombieEvent	zombievent;

	i = -1;
	while (++i < 4)
	{
		if (i == 0)
			zombie[i] = zombievent.newZombie("Jessica");
		else if (i == 1)
			zombie[i] = zombievent.newZombie("Bob");
		else
			zombie[i] = zombievent.randomChump();
		zombie[i]->advert();
	}
	i = -1;
	while (++i < 4)
		zombie[i]->advert();
	i = -1;
	while (++i < 4)
	{
		zombie[i]->advert();
		delete zombie[i];
	}
	return (0);
}
