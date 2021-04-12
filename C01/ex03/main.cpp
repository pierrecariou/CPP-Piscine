#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <sstream>

int	main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		std::cout << "Precise the number of zombies in argv1" << std::endl;
		return (1);
	}
	std::istringstream(argv[1]) >> n;
	ZombieHorde	zombiehorde(n);
	zombiehorde.announce();
	return (0);
}
