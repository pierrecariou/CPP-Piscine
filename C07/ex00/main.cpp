#include "main.hpp"

int	main(void)
{
	std::cout << "-- INT --" << std::endl;
	int a = 4;
	int b = 3;
	std::cout << "a=" << a << " b=" << b << std::endl;
	swap(a, b);
	std::cout << "swap:" << "a=" << a << " b=" << b << std::endl;

	std::cout << "min:" << min(a, b) << std::endl;
	std::cout << "max:" << max(a, b) << "\n" << std::endl;

	std::cout << "-- FLOAT --" << std::endl;
	float c = 4.2f;
	float d = -3.7f;
	std::cout << "c=" << c << " d=" << d << std::endl;
	swap(c, d);
	std::cout << "swap:" << "c=" << c << " d=" << d << std::endl;

	std::cout << "min:" << min(c, d) << std::endl;
	std::cout << "max:" << max(c, d) << "\n" << std::endl;

	std::cout << "-- CHAR --" << std::endl;
	char e = 'e';
	char f = 'f';
	std::cout << "e=" << e << " f=" << f << std::endl;
	swap(e, f);
	std::cout << "swap:" << "e=" << e << " f=" << f << std::endl;

	std::cout << "min:" << min(e, f) << std::endl;
	std::cout << "max:" << max(e, f) << "\n" << std::endl;

	std::cout << "-- STRING --" << std::endl;
	std::string i = "chaine1";
	std::string j = "chaine2";
	std::cout << "i=" << i << " j=" << j << std::endl;
	swap(i, j);
	std::cout << "swap:" << "i=" << i << " j=" << j << std::endl;

	std::cout << "min:" << min(i, j) << std::endl;
	std::cout << "max:" << max(i, j) << "\n" << std::endl;

	std::cout << "-- AWESOME --" << std::endl;
	Awesome g(4);
	Awesome h(3);
	std::cout << "g=" << g << " h=" << h << std::endl;
	swap(g, h);
	std::cout << "swap:" << "g=" << g << " h=" << h << std::endl;

	std::cout << "min:" << min(g, h) << std::endl;
	std::cout << "max:" << max(g, h) << "\n" << std::endl;
	return (0);
}
