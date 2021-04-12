#include "Bureaucrat.hpp"

std::string const	&n = "name";

Bureaucrat::Bureaucrat(void) : name(n), grade(150)
{
	std::cout << "Bureaucrat created" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat created" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(n)
{
	*this = src;
	std::cout << "Bureaucrat copied" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat deleted" << std::endl;
	return ;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
		this->grade = rhs.grade;
	std::cout << "Bureaucrat assigned" << std::endl;
	return (*this);
}

std::string	const	&Bureaucrat::getName(void) const
{
	return this->name;
}

int					Bureaucrat::getGrade(void) const
{
	return this->grade;
}

void				Bureaucrat::dec(void)
{
	if (this->grade > 149)
		throw GradeTooLowException();
	this->grade++;
}

void				Bureaucrat::inc(void)
{
	if (this->grade < 2)
		throw GradeTooHighException();
	this->grade--;
}

void				Bureaucrat::signForm(Form const &form, bool s) const
{
	if (s)
		std::cout << this->getName() << " signs "<< form.getName() << std::endl;
	else
		std::cout << this->getName() << " cannot sign "<< form.getName() << " because the form is already signed"<< std::endl;
}

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}
