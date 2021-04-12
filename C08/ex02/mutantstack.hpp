#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <string>
# include <iostream>
# include <stack>
# include <list>

template <typename T>

class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;
		MutantStack<T>() : std::stack<T>() {};
		MutantStack<T>(const MutantStack& rhs) : std::stack<T>(rhs) {};
		virtual ~MutantStack<T>() {};
		MutantStack &operator=(const MutantStack &rhs)
		{
			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			return (*this);
		};
		iterator	begin() {	
			return (std::stack<T>::c.begin());
		}
		iterator	end() {
			return (std::stack<T>::c.end());
		}
};

#endif
