#include "easyfind.hpp"
#include <list>
#include <vector>

int	main(void)
{
	try
	{
		std::list<int>	lst;
		lst.push_back(42);
		lst.push_back(24);
		lst.push_back(31);
		std::cout << easyfind(lst, 24) << std::endl;

		std::vector<int>	v(5, 42);	
		std::cout << easyfind(v, 41) << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
