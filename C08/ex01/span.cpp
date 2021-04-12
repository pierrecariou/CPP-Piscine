#include "span.hpp"

Span::Span(void)
{
	return ;
}

Span::Span(int N) : N(N), i(0)
{
	return ;
}

Span::Span(const Span &src)
{
	*this = src;
	std::cout << "Span copied" << std::endl;
	return ;
}

Span::~Span(void)
{
	return ;
}

Span	&Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->N = rhs.N;
		this->lst = rhs.lst;
		this->i = rhs.i;
	}
	std::cout << "Span assigned" << std::endl;
	return (*this);
}

int	Span::getN(void) const
{
	return this->N;
}

std::list<int>	Span::getLst(void) const
{
	return this->lst;
}

int	Span::getI(void) const
{
	return this->i;
}

void	Span::addNumber(int num)
{
	if (this->i == this->N)
		throw FullException();
	this->lst.push_back(num);
	this->i++;
}

void	Span::addNumber(int num, int n)
{
	int	k;

	if (this->i + n > this->N)
		throw FullException();
	for (k = 0; k < n; k++)
		this->lst.push_back(num);
	this->i+=k;
}

void	Span::addNumberRand(int n)
{
	int	k;

	if (this->i + n > this->N)
		throw FullException();
	for (k = 0; k < n; k++)
		this->lst.push_back(rand());
	this->i+=k;
}

int		Span::shortestSpan(void) const
{
	int diff = INT_MAX;
	int left;

	if (i <= 1)
		throw NothingException();
	std::vector<int> v(lst.begin(), lst.end());
	std::sort(v.begin(), v.end());
	for (std::vector<int>::iterator it=v.begin(); it!=v.end(); ++it)
	{
		if (it != v.begin() && (*it - left) < diff)
			diff = *it - left;
		left = *it;	
	}
	return (diff);
}

int		Span::longestSpan(void) const
{
	if (i <= 1)
		throw NothingException();
	return *std::max_element(lst.begin(), lst.end()) - *std::min_element(lst.begin(), lst.end());
}
