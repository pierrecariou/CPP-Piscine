#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>
# include <iostream>

class AWeapon {
	public:
		AWeapon(void);
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(const AWeapon &src);
		virtual ~AWeapon(void);
		AWeapon				&operator=(const AWeapon &rhs);
		std::string	const	&getName(void) const;
		int					getApcost(void) const;
		int					getDamage(void) const;
		virtual void		attack(void) const = 0;

	protected:
		std::string		name;
		int				apcost;
		int				damage;
};

#endif
