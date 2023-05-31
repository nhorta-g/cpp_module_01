#include "Zombie.hpp"

int	main(void)
{
	Zombie *Nuno_Zombie = newZombie("zombie Nuno");
	randomChump("zombie Miguel");
	delete Nuno_Zombie;
	return(0);
}
