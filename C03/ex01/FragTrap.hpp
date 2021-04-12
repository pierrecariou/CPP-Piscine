#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include <stdlib.h>

class FragTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(const FragTrap &src);
		~FragTrap(void);
		FragTrap	&operator=(const FragTrap &rhs);
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
		int		insult(std::string const &target);
		int		scratch(std::string const &target);
		int		combo(std::string const &target);
		int		kick(std::string const &target);
		int		gun(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		int		vaulthunter_dot_exe(std::string const &target);

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
