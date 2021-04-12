#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <string>
# include <iostream>

class Human {
	public:
		Human(void);
		~Human(void);
		Brain	getBrain(void);
		void	*identify(void);

	private:
		Brain	&brain;
};

#endif
