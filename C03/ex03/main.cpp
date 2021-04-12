#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

void	classic_fight(void)
{
	std::cout << "-- Mitchell is good at loosing --"<< std::endl;
	std::cout << "A fight presented by pcariou...\n"<< std::endl;

	NinjaTrap john("John");
	NinjaTrap mitchell("Mitchell");

	while (mitchell.getHp() > 0)
	{
		john.meleeAttack(mitchell.getName());
		mitchell.takeDamage(john.getAtkmelee());		
	}	
}

void	random_attacks(void)
{
	int	amount;
	int	i = 1;
	
	std::cout << "-- This is some real fight (less than 18yrs old not allowed) --"<< std::endl;
	std::cout << "A fight presented by pcariou...\n"<< std::endl;

	FragTrap f1("Brandon");
	ScavTrap f2("Jessy");
	NinjaTrap f3("Ericson");

	srand((unsigned) time(0));
	while ((f1.getHp() > 0 && f2.getHp() > 0) && (f2.getEnergy() >= 25 || f1.getEnergy() >= 25))
	{
		std::cout << "\nROUND "<< i++ << std::endl;
		amount = f1.vaulthunter_dot_exe(f2.getName());
		if (amount != -1)
			f2.takeDamage(amount);
		if (f2.getHp() == 0)
			break ;
		amount = f2.challengeNewcomer(f1.getName());
		if (amount != -1)
			f1.takeDamage(amount);
		if (f1.getHp() == 0)
			break ;
		if (f1.getHp() > f2.getHp())
		{
			amount = f3.ninjaShoebox(f1);
			if (amount != -1)
				f1.takeDamage(amount);
			if (f1.getHp() > 0)
				f1.beRepaired(5);
		}
		else
		{
			amount = f3.ninjaShoebox(f2);
			if (amount != -1)
				f2.takeDamage(amount);
			if (f2.getHp() > 0)
				f2.beRepaired(5);
		}
	}
	std::cout << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please put an argument"<< std::endl;
		std::cout << "1 : classical combat"<< std::endl;
		std::cout << "2 : random attacks fight"<< std::endl;
		return (1);
	}
	if (argv[1][0] == '1')
		classic_fight();
	else if (argv[1][0] == '2')
		random_attacks();
	return (0);
}
