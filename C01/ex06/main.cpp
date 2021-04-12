#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon	club = Weapon("knife");

		HumanA bob("Bob", club);
		bob.attack();
		club.setType("revolver");
		bob.attack();
	}
	{
		Weapon	club = Weapon("knife");

		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("revolver");
		jim.attack();
	}
	return (0);
}
