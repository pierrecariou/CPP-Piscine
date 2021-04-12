#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form("Shrubbery creation form", 145, 137, target)
{
	std::cout << "ShrubberyCreationForm created" << std::endl;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm deleted" << std::endl;
	return ;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string ext = "_shrubbery";

	std::string file = this->getTarget() + ext;
	this->checkExecute(executor);

	std::ofstream outfile(file.c_str());
	outfile << " %%%o%%   %%%o%%" << std::endl;
	outfile << "%o%%%%%% %o%%%%%%" << std::endl;
	outfile << "%%%%%%%% %%%%%%%%" << std::endl;
	outfile << " %%%%%%   %%%%%%" << std::endl;
	outfile << "   ||       ||" << std::endl;
	outfile << "  _||_     _||_" << std::endl;

	outfile.close();

}
