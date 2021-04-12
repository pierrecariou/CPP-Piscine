#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character {
	public:
		Character(void);
		Character(std::string const &name);
		Character(const Character &src);
		~Character(void);
		Character			&operator=(const Character &rhs);
		std::string	const	&getName(void) const;
		int					getAp(void) const;
		AWeapon				*getWeapon(void) const;
		void				recoverAP(void);
		void				equip(AWeapon *weapon);
		void				attack(Enemy *enemy);

	private:
		std::string			name;
		int					ap;
		AWeapon				*weapon;
};

std::ostream    &operator<<(std::ostream &o, Character const &rhs);

#endif
