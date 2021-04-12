#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat {
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
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat(void);
		Bureaucrat	&operator=(const Bureaucrat &rhs);
		std::string	const	&getName(void) const;
		int					getGrade(void) const;
		void				inc(void);
		void				dec(void);
		void				signForm(Form const &form, bool s) const;
		void				executeForm(Form const &form) const;

	private:
		std::string const	&name;
		int					grade;
};

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &rhs);	

#endif
