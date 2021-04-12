#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <string>
# include <iostream>

template <typename T>

class Array {
	public:
		class OutOfRangeException : public std::exception {
			public:
				OutOfRangeException(void) throw() {
					return ;
				}
				OutOfRangeException(const OutOfRangeException &src) throw();
				virtual ~OutOfRangeException(void) throw() {
					return ;
				}
				OutOfRangeException	&operator=(const OutOfRangeException &rhs) throw();
				virtual const char *what() const throw() {
					return ("Error: element is out of range");
				}
		};
		Array<T>(void) : n(0), arr(new T[0]) {}
		Array<T>(unsigned int n) : n(n), arr(new T[n]) {
			for (unsigned int i = 0; i < n; i++)
			{
				T *a = new T();
				this->arr[i] = *a;
				delete a;
			}
		}
		Array<T>(const Array &src) : n(0), arr(new T[0]){
			*this = src;
		}
		~Array<T>(void) {
			delete[] this->arr;
		}
		Array			&operator=(const Array &rhs) {
			if (this != &rhs)
			{
				delete[] this->arr;
				this->n = rhs.n;
				this->arr = new T[rhs.size()];
				for (int i = 0; i < rhs.size(); i++)
					this->arr[i] = rhs.arr[i];
			}
			return (*this);
		}
		T				&operator[](unsigned int n) {
			if (n >= this->n)
				throw OutOfRangeException();
			return (this->arr[n]);
		}
		int				size(void) const {
			return (this->n);
		}

	private:
		unsigned int	n;
		T				*arr;
};

#endif
