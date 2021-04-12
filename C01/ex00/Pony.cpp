#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, std::string state) : name(name), color(color), state(state)
{
	std::cout << "Pony " << this->name << " is born in the " << this->state  << std::endl;
	return ;
}

Pony::~Pony(void)
{
	std::cout << "Pony " << this->name << " died" << std::endl;
	return ;
}

std::string	Pony::getName(void)
{
	return this->name;
}

std::string	Pony::getColor(void)
{
	return this->color;
}

std::string	Pony::getState(void)
{
	return this->state;
}
