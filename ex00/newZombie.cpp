#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie *newZombie;

	newZombie = new (std::nothrow) Zombie(name);
	if (!newZombie)
		return(0);

	return newZombie;
}
