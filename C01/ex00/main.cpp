#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony pony1("Gripoil", "Grey", "stack");
	std::cout << pony1.getColor() << " "<< pony1.getName() <<
	" is galloping in the " << pony1.getState() << std::endl; 
}

void	ponyOnTheHeap(void)
{
	Pony	*pony2 = new Pony("Tornado", "Black", "heap");
	std::cout << pony2->getColor() << " "<< pony2->getName() <<
	" is galloping in the " << pony2->getState() << std::endl; 
	delete pony2;
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
