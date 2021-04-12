#ifndef CURE_HPP
# define CURE_HPP

# include <string>
# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure(void);
		Cure(std::string const &name);
		Cure(const Cure &src);
		virtual ~Cure(void);
		virtual Cure	&operator=(const Cure &rhs);
		std::string	const &getName(void) const;
		virtual AMateria	*clone() const;

	private:
		std::string	const &name;
};

#endif
