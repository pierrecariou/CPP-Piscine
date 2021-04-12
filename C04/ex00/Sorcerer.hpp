#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer {
	public:
		Sorcerer(void);
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer &src);
		~Sorcerer(void);
		Sorcerer	&operator=(const Sorcerer &rhs);
		std::string	getName(void) const;
		std::string	getTitle(void) const;
		void		polymorph(Victim const &victim) const;

	private:
		std::string	name;
		std::string	title;
};

std::ostream	&operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
