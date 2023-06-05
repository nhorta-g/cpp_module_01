#include "Weapon.hpp"
#include "HumanB.hpp"
#include "HumanA.hpp"

Human::Weapon(void) {
    return ;
}

Human::~Weapon(void) {
    return ;
}

const std::string Human::getType(void) {
    return (this->_type);
}

void Human::setType(std::string type) {
    this->_type = type;
}
