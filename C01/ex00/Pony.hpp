#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony {
	public:
		Pony(std::string name, std::string color, std::string state);
		~Pony(void);
		std::string getName(void);
		std::string getColor(void);
		std::string getState(void);

	private:
		std::string name;
		std::string color;
		std::string state;
};

#endif
