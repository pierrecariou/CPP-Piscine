#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		virtual ~MateriaSource(void);
		MateriaSource	&operator=(const MateriaSource &rhs);
		virtual void learnMateria(AMateria *m);
		virtual AMateria* createMateria(std::string const &type);
	
	private:
		AMateria	*m[4];
};

#endif
