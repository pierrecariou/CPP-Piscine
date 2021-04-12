#include <string>
#include <iostream>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*p;
	std::string	&ref = string;
	
	p = &string;
	std::cout << *p << std::endl;
	std::cout << ref << std::endl;
	return (0);
}
