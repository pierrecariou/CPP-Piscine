#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <string>
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
	public:
		PlasmaRifle(void);
		PlasmaRifle(std::string const &name, int apcost, int damage);
		PlasmaRifle(const PlasmaRifle &src);
		virtual ~PlasmaRifle(void);
		PlasmaRifle	&operator=(const PlasmaRifle &rhs);
		virtual void		attack(void) const;
};

#endif
