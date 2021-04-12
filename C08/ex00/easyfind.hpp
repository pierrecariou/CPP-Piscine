#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <string>
# include <iostream>
# include <algorithm>
# include <exception>

class NotFindException : public std::exception {
	virtual const char *what() const throw() {
		return ("Error: element not found");
	}
};

template<typename T>

int	easyfind(T &c, int n)
{
	if (std::find(c.begin(), c.end(), n) == c.end())
		throw NotFindException();
	return *std::find(c.begin(), c.end(), n);
}

#endif
