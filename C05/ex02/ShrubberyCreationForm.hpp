#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <iostream>
# include <fstream> 
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		virtual ~ShrubberyCreationForm(void);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);
		virtual void			execute(Bureaucrat const &executor) const;
};

#endif
