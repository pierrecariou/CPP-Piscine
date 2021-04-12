#include <stdlib.h>
#include <exception>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int		testA(Base &p)
{
	try {		
		A &a = dynamic_cast<A &>(p);
		if (&a == &a)
			std::cout << "A" << std::endl;
	}
	catch (std::exception &bc) {
		return (0);
	}
	return (1);	
}

int		testB(Base &p)
{
	try {		
		B &b = dynamic_cast<B &>(p);
		if (&b == &b)
			std::cout << "B" << std::endl;
	}
	catch (std::exception &bc) {
		return (0);
	}
	return (1);	
}

int		testC(Base &p)
{
	try {		
		C &c = dynamic_cast<C &>(p);
		if (&c == &c)
			std::cout << "C" << std::endl;
	}
	catch (std::exception &bc) {
		return (0);
	}
	return (1);	
}

void	identify_from_reference(Base &p)
{
	int	(*arr[])(Base &p) = {
		&testA,
		&testB,
		&testC
	};
	for (int i = 0; i < 3; i++)
	{
		if (arr[i](p))
			break ;
	}
}

void	identify_from_pointer(Base *p)
{
	A* a;
	B* b;
	C *c;

	if ((a = dynamic_cast<A *>(p)))
		std::cout << "A" << std::endl;
	else if ((b = dynamic_cast<B *>(p)))
		std::cout << "B" << std::endl;
	else if ((c = dynamic_cast<C *>(p)))
		std::cout << "C" << std::endl;
}

Base	*generate(void)
{
	Base *base;
	int random = rand() % 3;

	if (random == 0)
		base = new A;
	else if (random == 1)
		base = new B;
	else
		base = new C;
	return (base);
}

int main(void)
{
	Base *base;

	srand((unsigned) time(0));
	base = generate();
	identify_from_pointer(base);
	identify_from_reference(*base);
	delete base;
	return (0);
}
