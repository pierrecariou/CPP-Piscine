#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA {
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);
		Weapon		getWeapon(void);
		std::string	getName(void);
		void		attack(void);

	private:
		std::string			name;
		const Weapon		&weapon;
};

#endif
