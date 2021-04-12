#include <iostream>

int main(int argc, char **argv)
{
	int		i;
	int		k;
	char	c;

	i = -1;
	k = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (++k < argc)
		{
			while (argv[k][++i])
			{
				if (argv[k][i] >= 'a' && argv[k][i] <= 'z')
				{
					c = argv[k][i] - 32;
					std::cout << c;
				}
				else
					std::cout << argv[k][i];
			}
			i = -1;
		}
		std::cout << "" << std::endl;
	}
	return (0);
}
