#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB {
	public:
		HumanB(std::string name);
		~HumanB(void);
		Weapon		getWeapon(void);
		void		setWeapon(Weapon &weapon);
		std::string	getName(void);
		void		attack(void);

	private:
		Weapon		*weapon;
		std::string	name;
};

#endif
