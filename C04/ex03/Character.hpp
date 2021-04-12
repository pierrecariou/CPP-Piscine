#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {
	public:
		Character(void);
		Character(std::string name);
		Character(const Character &src);
		virtual ~Character(void);
		Character	&operator=(const Character &rhs);
		virtual std::string	const &getName(void) const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);

	private:
		std::string	name;
		AMateria	*m[4];
};

#endif
