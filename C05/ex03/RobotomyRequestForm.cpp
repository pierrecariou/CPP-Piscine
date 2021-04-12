#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("Robotomy request form", 72, 45, target)
{
	std::cout << "RobotomyRequestForm created" << std::endl;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm deleted" << std::endl;
	return ;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	int success = rand() % 2;

	this->checkExecute(executor);
	std::cout << "SHRSHRZZZZZZZZIUIPPPPPPAAAIIMMM!" << std::endl;
	if (success)
		std::cout << this->getTarget() << " has been robotomized successfully"<< std::endl;
	else
		std::cout << "Robotomization failed..." << std::endl;

	
}
