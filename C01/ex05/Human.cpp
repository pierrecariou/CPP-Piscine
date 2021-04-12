#include "Human.hpp"

Human::Human(void) : brain(*(new Brain()))
{
	return ;
}

Human::~Human(void)
{
	delete &(this->brain);
	return ;
}

Brain	Human::getBrain(void)
{
	return this->brain;
}

void	*Human::identify(void)
{
	return (this->brain.identify());
}
