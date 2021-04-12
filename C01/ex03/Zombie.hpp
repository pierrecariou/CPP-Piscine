#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);
		std::string	getType(void);
		std::string	getName(void);
		std::string	getAge(void);
		void		setType(std::string type);
		void		setName(std::string name);
		void		advert(void);
		void		announce(void);
		static int	getNbInstRand(void);

	private:
		std::string	type;
		std::string	name;
		static int	_nbInstRand;
};

#endif
