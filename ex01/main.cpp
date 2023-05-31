#include "Zombie.hpp"

int	main(void)
{
	Zombie *Horde = zombieHorde(12, "fantastic horde");
	delete[] Horde;
	return(0);
}
