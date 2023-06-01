#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *Horde;

	Horde = new (std::nothrow) Zombie[N];
	if (!Horde)
		return(0);
	for(int i = 0; i < N; i++)
	{
		Horde[i].announce();
		Horde[i].setName(name);
	}
	return Horde;
}
