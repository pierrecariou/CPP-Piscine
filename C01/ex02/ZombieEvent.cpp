#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	return ;
}

ZombieEvent::~ZombieEvent(void)
{
	return ;
}

void		ZombieEvent::setZombieType(Zombie *zombie, std::string type)
{
	zombie->setType(type);
	return ;
}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie = new Zombie();
	zombie->setName(name);
	this->setZombieType(zombie, "ugly");
	zombie->announce();
	return (zombie);
}

Zombie		*ZombieEvent::randomChump(void)
{
	const std::string	names[4] = {"Mickey", "John", "Stuart", "Tiffany"};
	
	Zombie	*zombie = new Zombie();
	if (Zombie::getNbInstRand() == 1)
		srand((unsigned) time(0));
	zombie->setName(names[(rand() % 4)]);
	this->setZombieType(zombie, "strange");
	zombie->announce();
	return (zombie);
}
