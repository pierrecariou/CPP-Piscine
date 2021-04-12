#ifndef BAZOOKA_HPP
# define BAZOOKA_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class Bazooka : public AWeapon {
	public:
		Bazooka(void);
		Bazooka(std::string const &name, int apcost, int damage);
		Bazooka(const Bazooka &src);
		virtual ~Bazooka(void);
		Bazooka	&operator=(const Bazooka &rhs);
		virtual void		attack(void) const;
};

#endif
