#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include <stdlib.h>

class ScavTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &src);
		~ScavTrap(void);
		ScavTrap	&operator=(const ScavTrap &rhs);
		int	getHp(void) const;
		int	getHpmax(void) const;
		int	getEnergy(void) const;
		int	getEnergymax(void) const;
		int	getLvl(void) const;
		std::string	getName(void) const;
		int	getAtkmelee(void) const;
		int	getAtkranged(void) const;
		int	getArmor(void) const;
		void	rangedAttack(std::string const &target);
		void	meleeAttack(std::string const &target);
		int		shoot(std::string const &target);
		int		hand(std::string const &target);
		int		jump(std::string const &target);
		int		tongue(std::string const &target);
		int		kiss(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		int		challengeNewcomer(std::string const &target);

	private:
		int	hp;
		int	hpmax;
		int	energy;
		int	energymax;
		int	lvl;
		std::string	name;
		int	atkmelee;
		int	atkranged;
		int	armor;
};

#endif
