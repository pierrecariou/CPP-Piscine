#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon {
	public:
		PowerFist(void);
		PowerFist(std::string const &name, int apcost, int damage);
		PowerFist(const PowerFist &src);
		virtual ~PowerFist(void);
		PowerFist	&operator=(const PowerFist &rhs);
		virtual void		attack(void) const;
};

#endif
