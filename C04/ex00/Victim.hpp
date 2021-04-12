#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>
# include <iostream>

class Victim {
	public:
		Victim(void);
		Victim(std::string name);
		Victim(const Victim &src);
		virtual ~Victim(void);
		Victim	&operator=(const Victim &rhs);
		std::string	getName(void) const;
		virtual void		getPolymorphed(void) const;

	protected:
		std::string	name;
};

std::ostream	&operator<<(std::ostream &o, Victim const &rhs);

#endif
