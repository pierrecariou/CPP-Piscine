#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{

	Bureaucrat	*c = new Bureaucrat("Mich", 1);
	Bureaucrat	*c1 = new Bureaucrat("Bobby", 2);
	Bureaucrat	*b = new Bureaucrat("Jeff", 42);
	Form 		*f = new Form("pay sheet", 3, 1, "Steve");
	Form 		*f1 = new Form("pay sheet1", 5, 1, "Brad");

	srand((unsigned) time(0));
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

	Bureaucrat	*m = new Bureaucrat("Mich", 1);
	Bureaucrat	*o = new Bureaucrat("Bobby", 138);
	Bureaucrat	*j = new Bureaucrat("Jeff", 42);
	Form	*sh = new ShrubberyCreationForm("garden");
	Form	*ro = new RobotomyRequestForm("John");
	Form	*pr = new PresidentialPardonForm("Gui");

	sh->beSigned(*m);
	std::cout << *sh << std::endl;
	m->executeForm(*sh);
	ro->beSigned(*m);
	std::cout << *ro << std::endl;
	m->executeForm(*ro);
	pr->beSigned(*m);
	std::cout << *pr << std::endl;
	m->executeForm(*pr);

	o->executeForm(*sh);

	Intern  someRandomIntern;
	Form*   rrf;
	Form*	ppf;
	Form*	none;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << *rrf << std::endl;
	rrf->beSigned(*j);
	j->executeForm(*rrf);

	ppf =  someRandomIntern.makeForm("presidential pardon", "Steve");
	std::cout << *ppf << std::endl;
	ppf->beSigned(*m);
	m->executeForm(*ppf);

	none =  someRandomIntern.makeForm("pay sheet?", "Bob");
	
	delete m;
	delete o;
	delete j;
	delete sh;
	delete ro;
	delete pr;
	delete ppf;
	delete rrf;

	return (0);
}
