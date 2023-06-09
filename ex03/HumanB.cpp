#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	_name = name;
    return;
}

HumanB::~HumanB(void) {
    return;
}

void 	HumanB::setWeapon(Weapon &Weapon) {
	_Weapon = &Weapon;
}

void	HumanB::attack(void) {
	std::string Weapon = _Weapon->getType();
	std::cout << this->_name << " attacks with their " \
		<< Weapon << std::endl;
}
