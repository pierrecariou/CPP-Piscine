#ifndef KNIGHT_HPP
# define KNIGHT_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Knight : public Victim {
	public:
		Knight(void);
		Knight(std::string name);
		Knight(const Knight &src);
		virtual ~Knight(void);
		Knight	&operator=(const Knight &rhs);
		virtual void	getPolymorphed(void) const;
};

#endif
