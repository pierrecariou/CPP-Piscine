#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>
# include <stdlib.h>

class ClapTrap {
	public:
		ClapTrap(void);
		ClapTrap(int hp, int hpmax, int energy, int energymax, int lvl, std::string name, int atkmelee, int atkranged, int armor, std::string trap);
		ClapTrap(const ClapTrap &src);
		~ClapTrap(void);
		ClapTrap	&operator=(const ClapTrap &rhs);
		int			getHp(void) const;
		int			getHpmax(void) const;
		int			getEnergy(void) const;
		int			getEnergymax(void) const;
		int			getLvl(void) const;
		std::string	getName(void) const;
		int			getAtkmelee(void) const;
		int			getAtkranged(void) const;
		int			getArmor(void) const;
		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	protected:
		int			hp;
		int			hpmax;
		int			energy;
		int			energymax;
		int			lvl;
		std::string	name;
		int			atkmelee;
		int			atkranged;
		int			armor;
		std::string	trap;
};

#endif
