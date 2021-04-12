#ifndef BIRD_HPP
# define BIRD_HPP

# include <string>
# include <iostream>
# include "Enemy.hpp"

class Bird : public Enemy {
	public:
		Bird(void);
		Bird(int hp, std::string const &type);
		Bird(const Bird &src);
		virtual ~Bird(void);
		Bird		&operator=(const Bird &rhs);
};

#endif
