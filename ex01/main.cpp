#include "Zombie.hpp"

int	main(void)
{
	int size = 5;

	Zombie *Horde = zombieHorde(size, "Horde zombie");
	if (Horde == NULL) {
		std::cout << "Failed allocating dinamic memory." << std::endl;
		return 1;
	}
	delete[] Horde;
	return(0);
}
