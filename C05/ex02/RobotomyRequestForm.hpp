#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string const &target);
		RobotomyRequestForm(const RobotomyRequestForm &src);
		virtual ~RobotomyRequestForm(void);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);
		virtual void		execute(Bureaucrat const &executor) const;
};

#endif
