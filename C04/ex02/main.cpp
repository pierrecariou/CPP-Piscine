#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

int main(void)
{
	int k = 0;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;


	vlc->push(bob);
	vlc->push(bob);
	vlc->push(NULL);
	vlc->push(jim);

	while (k++ < 5)
		vlc->push(bob->clone());
	while (k++ < 10)
		vlc->push(jim->clone());

	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	vlc->getUnit(vlc->getCount());
	delete vlc;

	Squad	*s = new Squad;
	Squad	*cp = new Squad;

	ISpaceMarine	*bobby = new TacticalMarine;
	ISpaceMarine	*jimmy = new AssaultTerminator;

	s->push(bobby);
	s->push(bobby);

	cp->push(jimmy);
	cp->push(jimmy);
	
	s->getUnit(0)->battleCry();
	cp->getUnit(0)->battleCry();
	
	*cp = *s;

	s->getUnit(0)->battleCry();
	cp->getUnit(0)->battleCry();

	delete cp;
	delete s;

	return 0;
}
