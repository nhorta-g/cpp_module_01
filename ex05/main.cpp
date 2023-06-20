#include "Harl.hpp"

int main (int ac, char **av)
{
	Harl	test;

	if (ac != 2)
	{
		std::cerr << "Error: usage: ./harl __complain_level__" << std::endl;
		return 1;
	}
	test.complain(av[1]);
	return (0);
}
