#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>
# include <iostream>

class Enemy {
	public:
		Enemy(void);
		Enemy(int hp, std::string const &type);
		Enemy(const Enemy &src);
		virtual ~Enemy(void);
		Enemy	&operator=(const Enemy &rhs);
		int	getHp(void) const;
		std::string	const	&getType(void) const;
		virtual void		takeDamage(int damage);

	protected:
		int					hp;
		std::string			type;
};

#endif
