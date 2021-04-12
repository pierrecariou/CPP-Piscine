#include <sstream>
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>

struct Data {
	std::string	s1;
	int			n;
	std::string	s2;
};

void	*serialize(void)
{
	Data	*data = new Data;

	int		i;
	static const char alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 8; i++)
		data->s1 += alphanum[rand() % 62];
	data->n = rand() % 2147483647;
	for (i = 0; i < 8; i++)
		data->s2 += alphanum[rand() % 62];
	return reinterpret_cast<void *>(data);
}

Data	*deserialize(void *raw)
{
	return reinterpret_cast<Data *>(raw);
}

int	main(void)
{
	void	*s;
	Data	*d;

	srand((unsigned) time(0));
	s = serialize();

	std::cout << "addr raw:  " << s << std::endl;

	d = deserialize(s);

	std::cout << "addr data: " << &d->s1 << std::endl;

	std::cout << "s1: " << d->s1 << std::endl;
	std::cout << "i:  "<< d->n << std::endl;
	std::cout << "s2: " << d->s2 << std::endl;
	delete d;
	return (0);
}
