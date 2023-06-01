#include "Zombie.hpp"

int	main(void)
{
	Zombie *Nuno_Zombie = newZombie("zombie Nuno");
		if (!Nuno_Zombie) {
			std::cout << "Failed allocating dinamic memory." << std::endl;
			return 1;
		}
	randomChump("zombie Miguel");
	delete Nuno_Zombie;
	return(0);
}
