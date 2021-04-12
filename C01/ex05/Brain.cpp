#include "Brain.hpp"

Brain::Brain(void)
{
	this->address = this;
	return ;
}

Brain::~Brain(void)
{
	return ;
}

std::string	Brain::getSize(void)
{
	return this->size;
}

void	*Brain::getAddress(void)
{
	return this->address;
}

void	*Brain::identify(void)
{
	return (this->address);
}
