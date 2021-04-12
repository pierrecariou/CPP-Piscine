#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy {
	public:
		RadScorpion(void);
		RadScorpion(int hp, std::string const &type);
		RadScorpion(const RadScorpion &src);
		virtual ~RadScorpion(void);
		RadScorpion		&operator=(const RadScorpion &rhs);
};

#endif
