#include "minitel.hpp"
#include "Contact.hpp"

int		infosOutput(Contact *contact, int n_cont)
{
	int			k;
	std::string	index;
	int			i;
	int			error;

	k = -1;
	error = 1;
	while (++k < n_cont)
		contact[k].showInfosTable(k);	
	std::cout << "Please enter the index of the contact you are looking for" << std::endl;
	while (error)
	{
		std::cout << ">> ";
		std::getline(std::cin, index);
		if (std::cin.eof())
		{
			std::cout << "EXIT" << std::endl;
			return (1) ;
		}
		if (index.length() == 1 && isdigit(index[0]))
			std::istringstream(index) >> i;
		if (index.length() != 1 || !isdigit(index[0]))
			std::cout << "Please choose a valid index" << std::endl;
		else if (i >= 0 && i < n_cont)
		{
			contact[i].showInfos();
			error  = 0;
		}
		else
			std::cout << "Please choose a valid index" << std::endl;
	}
	return (0);
}


int		main(void)
{
	int			end;
	int			i;
	Contact		contact[8];
	std::string	action;

	end = 0;
	i = 0;
	std::cout << "WELCOME IN MINITEL..." << std::endl;
	while (!end)
	{
		std::cout << "Please choose your action: ADD, SEARCH or EXIT" << std::endl;
		std::cout << ">> ";
		std::getline(std::cin, action);
		if (std::cin.eof())
		{
			std::cout << "EXIT" << std::endl;
			break ;
		}
		if (!action.compare("EXIT"))
			break ;	
		else if (!action.compare("ADD") && i < 8)
			contact[i++].addInfos();
		else if(!action.compare("ADD"))
			std::cout << "You have too many contacts" << std::endl;
		else if (!action.compare("SEARCH") && i > 0)
		{
			if (infosOutput(contact, i))
				break ;
		}
		else if (!action.compare("SEARCH"))
			std::cout << "You doesn't have any contacts" << std::endl;
		else
			std::cout << "Wrong input" << std::endl;
	}
	return (0);
}
