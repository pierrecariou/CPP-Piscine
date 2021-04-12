#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <stdlib.h>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	public:
		class GradeTooHighException : public std::exception {
			public:
				GradeTooHighException(void) throw()
				{
					return ;
				}
				GradeTooHighException(const GradeTooHighException &src) throw();
				virtual ~GradeTooHighException(void) throw()
				{
					return ;
				}
				GradeTooHighException   &operator=(const GradeTooHighException &rhs) throw();
				virtual const char *what() const throw()
				{
					return ("Error: Grade is too high");
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				GradeTooLowException(void) throw()
				{
					return ;
				}
				GradeTooLowException(const GradeTooLowException &src) throw();
				virtual ~GradeTooLowException(void) throw()
				{
					return ;
				}
				GradeTooLowException    &operator=(const GradeTooLowException &rhs) throw();
				virtual const char *what() const throw()
				{
					return ("Error: Grade is too low");
				}
		};
		class ExecuteException : public std::exception {
			public:
				ExecuteException(void) throw()
				{
					return ;
				}
				ExecuteException(const ExecuteException &src) throw();
				virtual ~ExecuteException(void) throw()
				{
					return ;
				}
				ExecuteException    &operator=(const ExecuteException &rhs) throw();
				virtual const char *what() const throw()
				{
					return ("Error: Form execution cannot be executed");
				}
		};
		Form(void);
		Form(std::string const &name, int const &gradeS, int const &gradeE, std::string const &target);
		Form(const Form &src);
		virtual ~Form(void);
		Form	&operator=(const Form &rhs);
		std::string	const	&getName(void) const;
		std::string	const	&getTarget(void) const;
		bool				getSignedB(void) const;
		int const			&getGradeS(void) const;
		int const			&getGradeE(void) const;
		void				beSigned(Bureaucrat const &bureaucrat);
		virtual void		execute(Bureaucrat const &executor) const;
		void				checkExecute(Bureaucrat const &executor) const;

	private:
		std::string const	name;
		bool				signedB;
		int const			gradeS;
		int const			gradeE;
		std::string	const	target;
};

std::ostream    &operator<<(std::ostream &o, Form const &rhs);	

#endif
