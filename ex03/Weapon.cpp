#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

Weapon::Weapon(void) {
    return ;
}

Weapon::~Weapon(void) {
    return ;
}

const std::string Weapon::getType(void) {
    return (this->_type);
}

void Weapon::setType(std::string type) {
    this->_type = type;
}
