#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <string>
# include <iostream>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {
	public:
		TacticalMarine(void);
		TacticalMarine(const TacticalMarine &src);
		virtual ~TacticalMarine(void);
		TacticalMarine	&operator=(const TacticalMarine &rhs);
		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
		int			getInsquad(void) const;
};

#endif
