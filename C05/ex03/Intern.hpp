#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
	public:
		Intern(void);
		Intern(const Intern &src);
		~Intern(void);
		Intern	&operator=(const Intern &rhs);
		Form	*makeForm(std::string const &name, std::string const &target);
};

#endif
