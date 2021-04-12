#include "includes/replace.hpp"

int		error(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Please provide 3 arguments: [filename] [string1] [string2]" << std::endl;
		return (1);
	}
	if (!argv[1][0] || !argv[2][0] || !argv[3][0])
	{
		std::cout << "The arguments can't be empty" << std::endl;
		return (1);
	}
	return (0);
}

void	replace(std::ifstream &ifs, std::ofstream &ofs, std::string str1, std::string str2)
{
	std::string	line;
	std::size_t	pos;
	int			i;

	i = 0;
	while (ifs)
	{
		if (++i > 1)
			ofs << std::endl;
		std::getline(ifs, line);
		pos = line.find(str1, 0);
		while (pos != std::string::npos)
		{
			    line.replace(pos, str1.length(), str2);
				pos = line.find(str1, pos + 1);
		}
		ofs << line;
	}
}

void	open_files(std::string filename, std::string str1, std::string str2)
{	
	std::ifstream	ifs(filename.c_str());
	std::ofstream	ofs((filename + (std::string)".replace").c_str());

	replace(ifs, ofs, str1, str2);
	ifs.close();	
	ofs.close();
}

int		main(int argc, char **argv)
{
	if (error(argc, argv))
		return (1);
	open_files(argv[1], argv[2], argv[3]);
	return (0);
}
