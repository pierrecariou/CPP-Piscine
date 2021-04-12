#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria {
	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(const AMateria &src);
		virtual ~AMateria(void);
		virtual AMateria	&operator=(const AMateria &rhs);
		std::string	const	&getType(void) const;
		unsigned int		getXp(void) const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter& target);

	protected:
		std::string			type;
		unsigned int		xp;
};

#endif
