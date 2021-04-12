#include "mutantstack.hpp"

int	main(void)
{
	std::cout << "-- MutantStack output--" << std::endl;

	MutantStack<int>    mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(-42);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::stack<int> s(mstack);

	std::cout << "last element of stack (copy of mstack): "<<  s.top() << std::endl;

	std::cout << "\n" << "-- List output--" << std::endl;

	std::list<int>    lst;

	lst.push_back(5);
	lst.push_back(17);

	std::cout << lst.back() << std::endl;

	lst.pop_back();

	std::cout << lst.size() << std::endl;

	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	lst.push_back(-42);
	lst.push_back(0);

	std::list<int>::iterator it1 = lst.begin();
	std::list<int>::iterator ite1 = lst.end();

	++it1;
	--it1;
	while(it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	return 0;
}
