#include "span.hpp"

int	main(void)
{
	try
	{
		srand((unsigned) time(0));
		Span sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		Span sp1 = Span(20000);

		sp1.addNumber(42, 20000);

		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;

		Span sp2 = Span(10000);

		sp2.addNumberRand(10000);

		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;

	}
	catch (std::exception const &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
