#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Knight.hpp"

int main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Knight karl("Karl");

	std::cout << robert << jim << joe << karl;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(karl);
	return 0;
}
