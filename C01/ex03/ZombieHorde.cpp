#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	int i;
	const std::string	names[12] = {"Mickey", "John", "Stuart", "Tiffany", "Suzie", "Daisy", "Bob", "Eve", "James", "Michael", "Christopher", "Matthew"};

	i = -1;
	Zombie	*zombies = new Zombie[n];
	this->zombies = zombies;
	this->n = n;
	srand((unsigned) time(0));
	while (++i < n)
		this->zombies[i].setName(names[rand() % 12]);
	return ;
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->zombies;
	return ;
}

Zombie	*ZombieHorde::getZombies(void)
{
	return this->zombies;
}

void	ZombieHorde::announce(void)
{
	int i;
	
	i = -1;
	while (++i < this->n)
		this->zombies[i].announce();
}
