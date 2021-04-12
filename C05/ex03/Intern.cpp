#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern created" << std::endl;
	return ;
}

Intern::~Intern(void)
{
	std::cout << "Intern deleted" << std::endl;
	return ;
}

Form	*makeShrubberyCreationForm(std::string const &name, std::string const &target)
{
	if (name == "shrubbery creation")
	{
		Form *form = new ShrubberyCreationForm(target);
		return (form);
	}
	return (NULL);
}

Form	*makePresidentialPardonForm(std::string const &name, std::string const &target)
{
	if (name == "presidential pardon")
	{
		Form *form = new PresidentialPardonForm(target);
		return (form);
	}
	return (NULL);
}

Form	*makeRobotomyRequestForm(std::string const &name, std::string const &target)
{
	if (name == "robotomy request")
	{
		Form *form = new RobotomyRequestForm(target);
		return (form);
	}
	return (NULL);
}

Form	*Intern::makeForm(std::string const &name, std::string const &target)
{
	int		i;
	Form	*form = NULL;
	Form 	*((*arr[])(std::string const &, std::string const &)) = {
		&makeRobotomyRequestForm,
		&makePresidentialPardonForm,
		&makeShrubberyCreationForm
	};

	for (i = 0; i < 3; i++)
	{
		form = arr[i](name, target);
		if (form)
			break ;
	}
	if (!form)
		std::cerr << "Requested form " << name << " is not known" << std::endl;
	return (form);
}
