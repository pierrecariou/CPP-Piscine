#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy {
	public:
		SuperMutant(void);
		SuperMutant(int hp, std::string const &type);
		SuperMutant(const SuperMutant &src);
		virtual ~SuperMutant(void);
		SuperMutant			&operator=(const SuperMutant &rhs);
		virtual void		takeDamage(int damage);
};

#endif
