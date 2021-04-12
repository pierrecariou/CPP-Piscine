#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form("Presidential pardon form", 25, 5, target)
{
	std::cout << "PresidentialPardonForm created" << std::endl;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm deleted" << std::endl;
	return ;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	this->checkExecute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
