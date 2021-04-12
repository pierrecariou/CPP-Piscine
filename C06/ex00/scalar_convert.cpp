#include <sstream>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <climits>
#include "Types.hpp"

void	decimal(char *str, Types *t)	
{
	std::ostringstream strs;
	strs << t->d;
	std::string str_d = strs.str();

	if ((!(str_d.find('.') >= 0 && str_d.find('.') < str_d.size())) &&
			!(!strcmp(str, "-inff") || !strcmp(str, "+inff") || !strcmp(str, "nanf")
				|| !strcmp(str, "-inf") || !strcmp(str, "+inf") || !strcmp(str, "nan")))
		t->fdpoint = ".0";
}

void	pseudo_litterals(char *str, Types *t)
{
	if (!strcmp(str, "-inff") || !strcmp(str, "+inff") || !strcmp(str, "nanf")
			|| !strcmp(str, "-inf") || !strcmp(str, "+inf") || !strcmp(str, "nan"))
	{
		t->ce = "impossible";
		t->ie = "impossible";
	}
}

int	is_double(char *str, Types *t)
{
	int i;
	bool p = 0;

	i = -1;
	if (strcmp(str, "-inf") && strcmp(str, "+inf") && strcmp(str, "nan"))
	{
		if (str[0] == '-')
			i++;
		while (str[++i + 1])
		{
			if (!isdigit(str[i]) && str[i] != '.')
				return (0);
			if ((str[i] == '.' && p) || (str[i] == '.' && i == 0) || (str[i] == '.'
						&& i == static_cast<int>(strlen(str)) - 1))
				return (0);
			if (str[i] == '.')
				p = 1;
		}
	}
	t->d = static_cast<double>(atof(str));
	t->f = static_cast<float>(t->d);
	if (atof(str) > INT_MAX || atof(str) < INT_MIN)
		t->ie = "impossible";
	else
		t->i = static_cast<int>(t->d);
	if (t->i >= 32 && t->i <= 126)
		t->c = static_cast<char>(t->d);
	else
		t->ce = "Non displayable";
	pseudo_litterals(str, t);
	return (1);	
}

int	is_float(char *str, Types *t)
{
	int i;
	bool p = 0;

	i = -1;
	if (str[strlen(str) - 1] != 'f')
		return (0);
	if (strcmp(str, "-inff") && strcmp(str, "+inff") && strcmp(str, "nanf"))
	{
		if (str[0] == '-')
			i++;
		while (str[++i + 1])
		{
			if (!isdigit(str[i]) && str[i] != '.')
				return (0);
			if ((str[i] == '.' && p) || (str[i] == '.' && i == 0) || (str[i] == '.'
						&& i == static_cast<int>(strlen(str)) - 2))
				return (0);
			if (str[i] == '.')
				p = 1;
		}
	}
	t->f = static_cast<float>(atof(str));
	if (atof(str) > INT_MAX || atof(str) < INT_MIN)
		t->ie = "impossible";
	else
		t->i = static_cast<int>(t->f);
	if (t->i >= 32 && t->i <= 126)
		t->c = static_cast<char>(t->f);
	else
		t->ce = "Non displayable";
	t->d = static_cast<double>(t->f);
	pseudo_litterals(str, t);
	return (1);	
}

int	limits(char *str, Types *t)
{
	if (atof(str) > INT_MAX || atof(str) < INT_MIN)
	{
		t->ce = "impossible";
		t->ie = "impossible";
		t->de = "impossible";
		t->fe = "impossible";
		return (1);
	}
	return (0);
}

int	is_int(char *str, Types *t)
{
	int i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '-')
			i++;
		if (!isdigit(str[i]))
			return (0);
	}
	if (limits(str, t))
		return (1);
	t->i = static_cast<int>(atoi(str));
	if (t->i >= 32 && t->i <= 126)
		t->c = static_cast<char>(t->i);
	else
		t->ce = "Non displayable";
	t->f = static_cast<float>(t->i);
	t->d = static_cast<double>(t->i);
	return (1);
}

int	is_char(char *str, Types *t)
{
	if (strlen(str) != 3)
	{
		return (0);
	}
	if (str[0] != '\'' || str[2] != '\'')
		return (0);
	t->c = str[1];
	t->i = static_cast<int>(t->c);
	t->f = static_cast<float>(t->c);
	t->d = static_cast<double>(t->c);
	return (1);
}

int	main(int argc, char **argv)
{
	Types	*t = new Types();
	int		i;
	int		(*arr[])(char *str, Types *t) = {
		&is_char,
		&is_int,
		&is_float,
		&is_double
	};
	if (argc != 2)
	{
		std::cerr << "wrong input: invalid number of arguments" << std::endl;
		delete t;
		return (1);
	}
	for (i = 0; i < 4; i++)
	{
		if (arr[i](argv[1], t))
			break ;
	}
	if (i == 4)
	{
		std::cerr << "wrong input: please provide a valid C++ literal type value" << std::endl;
		delete t;
		return (2);
	}
	decimal(argv[1], t);

	std::cout << *t << std::endl;
	delete t;
	return (0);
}
