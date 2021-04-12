#include "Array.hpp"

int	main(void)
{
	try
	{
		std::cout << "-- INTArray --" << std::endl;
		Array<int>	arr(3);
		arr[0] = 42;
		arr[1] = -42;
		for (int i = 0; i < arr.size(); i++)
			std::cout << arr[i] << std::endl;
		std::cout << std::endl;

		std::cout << "-- CHARArray --" << std::endl;
		Array<char>	arrc(4);
		arrc[0] = 't';
		arrc[1] = 'o';
		arrc[2] = 't';
		arrc[3] = 'o';
		for (int i = 0; i < arrc.size(); i++)
			std::cout << arrc[i] << std::endl;
		std::cout << std::endl;

		std::cout << "-- STRINGArray --" << std::endl;
		Array<std::string>	arrs(2);
		arrs[0] = "test";
		arrs[1] = "test2";
		for (int i = 0; i < arrs.size(); i++)
			std::cout << arrs[i] << std::endl;
		std::cout << std::endl;

		std::cout << "-- STRINGArray copy--" << std::endl;
		Array<std::string>	cp(arrs);
		for (int i = 0; i < arrc.size(); i++)
			std::cout << arrc[i] << std::endl;
		std::cout << std::endl;

		std::cout << "-- Array [] error... --" << std::endl;
		Array<char> e;
		e[0] = 'e';
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
