#include "Knight.hpp"

Knight::Knight(void) : Victim("Karl")
{
	std::cout << "For my lord!" << std::endl;
	return ;
}

Knight::Knight(std::string name) : Victim(name)
{
	std::cout << "For my lord!" << std::endl;
	return ;
}

Knight::Knight(const Knight &src)
{
	*this = src;
	std::cout << "Knight copied" << std::endl;
	return ;
}

Knight::~Knight(void)
{
	std::cout << "Croooa" << std::endl;
	return ;
}

Knight	&Knight::operator=(const Knight &rhs)
{
	if (this != &rhs)
	{
		this->name = rhs.getName();
	}
	std::cout << "Knight assigned" << std::endl;
	return (*this);
}

void		Knight::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a frog!" << std::endl;
	return ;
}
