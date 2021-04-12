#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <string>
# include <iostream>
# include "ISquad.hpp"

typedef struct  s_units
{
	ISpaceMarine    *unit;
	struct s_units 	*next;
}               t_units;

class Squad : public ISquad {
	public:
		Squad(void);
		Squad(int count, t_units *units);
		Squad(const Squad &src);
		virtual ~Squad(void);
		Squad	&operator=(const Squad &rhs);
		virtual int				getCount(void) const;
		virtual ISpaceMarine	*getUnit(int index) const;
		virtual int 			push(ISpaceMarine*);
		int						check_repet(const Squad &rhs) const;

	private:
		int				count;
		t_units			*units;
};

#endif
