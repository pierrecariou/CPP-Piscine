#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <string>
# include <iostream>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {
	public:
		AssaultTerminator(void);
		AssaultTerminator(const AssaultTerminator &src);
		virtual ~AssaultTerminator(void);
		AssaultTerminator	&operator=(const AssaultTerminator &rhs);
		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

#endif
