#include "Bureaucrat.hpp"

int	main(void)
{

	Bureaucrat	*c = new Bureaucrat("Mich", 1);

	try	
	{
		new Bureaucrat("Tom", 157);
	}
	catch (Bureaucrat::GradeTooLowException const &e)
	{
		std::cerr << e.what() << std::endl;
	}	

	try
	{
		std::cout << *c << std::endl;
		c->inc();
		std::cout << *c << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << *c << std::endl;

	delete c;
	return (0);
}
