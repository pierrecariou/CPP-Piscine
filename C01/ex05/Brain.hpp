#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain {
	public:
		Brain(void);
		~Brain(void);
		std::string	getSize(void);
		void	*getAddress(void);
		void	*identify(void);

	private:
		std::string	size;
		void		*address;
};

#endif
