#ifndef SPAN_HPP
# define SPAN_HPP

# include <string>
# include <iostream>
# include <list>
# include <algorithm>
# include <vector>
# include <limits.h>

class Span {
	public:
		class FullException : public std::exception {
			public:
				FullException(void) throw() {
					return ;
				}
				FullException(const FullException &src) throw();
				virtual ~FullException(void) throw() {
					return ;
				}
				FullException	&operator=(const FullException &rhs) throw();
				virtual const char *what() const throw() {
					return ("Error: Span is full");
				}
		};
		class NothingException : public std::exception {
			public:
				NothingException(void) throw() {
					return ;
				}
				NothingException(const NothingException &src) throw();
				virtual ~NothingException(void) throw() {
					return ;
				}
				NothingException	&operator=(const NothingException &rhs) throw();
				virtual const char *what() const throw() {
					return ("Error: no span to find");
				}
		};
		Span(void);
		Span(int N);
		Span(const Span &src);
		~Span(void);
		Span	&operator=(const Span &rhs);
		int	getN(void) const;
		std::list<int	>getLst(void) const;
		int	getI(void) const;
		void	addNumber(int num);
		void	addNumber(int num, int n);
		void	addNumberRand(int n);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

	private:
		int				N;
		std::list<int>	lst;
		int				i;
};

#endif
