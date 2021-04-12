#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string const &target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		virtual ~PresidentialPardonForm(void);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);
		virtual void			execute(Bureaucrat const &executor) const;
};

#endif
