#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{

	Bureaucrat	*c = new Bureaucrat("Mich", 1);
	Bureaucrat	*c1 = new Bureaucrat("Bobby", 2);
	Bureaucrat	*b = new Bureaucrat("Jeff", 42);
	Form 		*f = new Form("pay sheet", 3, 1);
	Form 		*f1 = new Form("pay sheet1", 5, 1);

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
	
	try
	{
		std::cout << *c1 << std::endl;
		std::cout << *b << std::endl;
		std::cout << *f << std::endl;
		f->beSigned(*c1);
		std::cout << *f << std::endl;
		f->beSigned(*c1);
		std::cout << *f1 << std::endl;
		f1->beSigned(*b);
	}
	catch (Form::GradeTooLowException const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	delete c;
	delete c1;
	delete b;
	delete f;
	delete f1;
	return (0);
}
