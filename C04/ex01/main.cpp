#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"
#include "Bird.hpp"
#include "Bazooka.hpp"

int main(void)
{
	Character* me = new Character("John");

	std::cout << *me;

	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->attack(c);
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->attack(c);
	me->recoverAP();
	me->recoverAP();
	me->recoverAP();
	me->equip(pf);
	std::cout << *me;
	me->attack(c);
	me->attack(c);
	std::cout << *me;
	me->attack(c);

	Enemy* d = new Bird();
	AWeapon* baz = new Bazooka();
	me->equip(baz);

	std::cout << *me;
	me->attack(d);
	me->recoverAP();
	std::cout << *me;
	me->attack(d);

	delete me;
	delete pr;
	delete pf;
	delete baz;

	return (0);
}
