#include "iter.hpp"

int main() {

	std::cout << "-- INT Array --" << std::endl;
	int tab[] = { 0, 1, 2, 3, 4 };
	iter( tab, 5, print );
	std::cout << std::endl;

	std::cout << "-- STRING Array --" << std::endl;
	std::string s[] = { "str1", "str2", "str42" };
	iter( s, 3, print );
	std::cout << std::endl;
	
	std::cout << "-- Awesome Array --" << std::endl;
	Awesome tab2[5];
	iter( tab2, 5, print );
	std::cout << std::endl;

	std::cout << "-- CHAR Array --" << std::endl;
	char str[14] = "STRINGEXAMPLE";
	iter(str, 6, print2);
	std::cout << std::endl;

	return 0;
}
