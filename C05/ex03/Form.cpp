#include "Form.hpp"

Form::Form(std::string const &name, int const &gradeS, int const &gradeE, std::string const &target) : name(name), signedB(0), gradeS(gradeS), gradeE(gradeE), target(target)
{
	if (gradeS < 1 || gradeE < 1)
		throw GradeTooHighException();
	else if (gradeS > 150 || gradeE > 150)
		throw GradeTooLowException();
	std::cout << "Form created" << std::endl;
	return ;
}

Form::~Form(void)
{
	std::cout << "Form deleted" << std::endl;
	return ;
}

std::string const	&Form::getName(void) const
{
	return this->name;
}

std::string const	&Form::getTarget(void) const
{
	return this->target;
}

bool				Form::getSignedB(void) const
{
	return this->signedB;
}

int const			&Form::getGradeS(void) const
{
	return this->gradeS;
}

int	const			&Form::getGradeE(void) const
{
	return this->gradeE;
}

void				Form::beSigned(Bureaucrat const &bureaucrat)
{
	bool s;

	s = 0;
	if (bureaucrat.getGrade() > this->getGradeS())
		throw GradeTooLowException();
	else
	{
		if (!this->signedB)
		{
			this->signedB = 1;
			s = 1;
		}
		bureaucrat.signForm(*this, s);
	}
}

void				Form::checkExecute(Bureaucrat const &executor) const
{
	if (!this->getSignedB() || executor.getGrade() > this->getGradeE())
		throw ExecuteException();
}

void				Form::execute(Bureaucrat const &executor) const
{
	this->checkExecute(executor);
	std::cout << this->getName() << " is executed by " << executor.getName() << std::endl;
}

std::ostream    &operator<<(std::ostream &o, Form const &rhs)
{
	o << rhs.getName();
	if (rhs.getSignedB())
		o << " already signed - ";
	else
		o << " not yet signed - ";
	o << "permissions: sign=grade_" << rhs.getGradeS() << " execute=grade_" << rhs.getGradeE();
	return o;
}
