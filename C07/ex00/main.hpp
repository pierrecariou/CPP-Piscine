#ifndef MAIN_HPP
# define MAIN_HPP

# include <string>
# include <iostream>

template<typename T>

void	swap(T &a, T &b)
{
	T	cp = a;
	a = b;
	b = cp;
}

template<typename T>

T const	&min(T &a, T &b)
{
	if (a < b)	
		return (a);
	return (b);
}

template<typename T>

T const	&max(T &a, T &b)
{
	if (a > b)	
		return (a);
	return (b);
}

class Awesome {
	public:
		Awesome( int n ) : _n( n ) {}
		bool operator==( Awesome const & rhs ) { return (this->_n == rhs._n); }
		bool operator!=( Awesome const & rhs ) { return (this->_n != rhs._n); }
		bool operator>( Awesome const & rhs ) { return (this->_n > rhs._n); }
		bool operator<( Awesome const & rhs ) { return (this->_n < rhs._n); }
		bool operator>=( Awesome const & rhs ) { return (this->_n >= rhs._n); }
		bool operator<=( Awesome const & rhs ) { return (this->_n <= rhs._n); }
		int	getN(void) const { return this->_n; } 

	private:
		int _n;
};

std::ostream    &operator<<(std::ostream &o, Awesome const &rhs) {
	o << rhs.getN();
	return o;
}

#endif
