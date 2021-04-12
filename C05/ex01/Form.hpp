#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
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
		Form(void);
		Form(std::string const &name, int const &gradeS, int const &gradeE);
		Form(const Form &src);
		~Form(void);
		Form	&operator=(const Form &rhs);
		std::string	const	&getName(void) const;
		bool				getSignedB(void) const;
		int const			&getGradeS(void) const;
		int const			&getGradeE(void) const;
		void				beSigned(Bureaucrat const &bureaucrat);

	private:
		std::string const	&name;
		bool				signedB;
		int const			&gradeS;
		int const			&gradeE;
};

std::ostream    &operator<<(std::ostream &o, Form const &rhs);	

#endif
