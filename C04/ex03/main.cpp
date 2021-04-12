#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	Ice	*m = new Ice();

	ICharacter* me = new Character("me");
	ICharacter* bob = new Character("bob");

	AMateria* tmp;
	AMateria* tmp1;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	std::cout << tmp->getXp() << std::endl;
	me->use(0, *bob);
	std::cout << tmp->getXp() << std::endl;
	tmp1 = src->createMateria("cure");
	me->equip(tmp1);

	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	me->use(0, *bob);
	me->unequip(0);
	me->use(0, *bob);

	me->equip(tmp1);
	me->equip(tmp);

	std::cout << m->getName() << std::endl;

	delete bob;
	delete me;
	delete src;
	delete m;

	return 0;
}
