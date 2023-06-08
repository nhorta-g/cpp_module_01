#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &Weapon) {
	_name = name;
	_Weapon = &Weapon;
    return;
}

HumanA::~HumanA(void) {
    return;
}

void	HumanA::attack(void) {
	std::cout << this->_name <<" attacks with their " \
		<< _Weapon->getType() << std::endl;
}
