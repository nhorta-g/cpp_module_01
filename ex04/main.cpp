#include <fstream>
#include <iostream>
#include <string>

std::string	create_content(std::ifstream &inputFile, std::string line, std::string s1, std::string s2)
{
	std::string	content;
	std::size_t	found;
	(void)s2;

	while (std::getline(inputFile, line))
	{
		content += line;
		if (!inputFile.eof())
			content += "\n";
	}
	found = content.find(s1);
	if (found == std::string::npos)
		std::cout << "String S1 not found in file" << std::endl;
	while (found != std::string::npos)
	{
		content.replace(found, s1.length(), s2);
		found = content.find(s1, found + s1.length());
	}
	return (content);
}

int main (int ac, char **av)
{
	std::string		infile_name, outfile_name, s1, s2, line;
	std::ifstream	inputFile;
	std::ofstream	outputFile;

	if (ac != 4)
	{
		std::cout << "Wrong Input, please insert filename followed by s1 and s2 strings." << std::endl;
		return (1);
	}
	infile_name = av[1];
	s1 = av[2];
	s2 = av[3];
	inputFile.open(av[1]);
	if (inputFile.is_open())
		std::cout << "Infile named \"" << infile_name << "\" opened sucessfully." << std::endl;
	else {
		std::cout << "Infile named \"" << infile_name << "\" does not open." << std::endl;
		return (1);
	}

	outfile_name = infile_name + ".replace";
	outputFile.open(outfile_name.c_str());
	if (outputFile.is_open())
		std::cout << "Outfile named \"" << outfile_name << "\" opened sucessfully." << std::endl;
	else
	{
		std::cout << "Outfile named \"" << outfile_name << "\" does not open." << std::endl;
		return (1);
	}
	outputFile << create_content(inputFile, line, s1, s2);
	return (0);
}
