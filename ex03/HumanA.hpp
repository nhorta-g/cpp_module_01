#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
    public:
        void HumanA(void);
        void ~HumanA(void);
    private:
        std::string	_name;
        Weapon      weapon;
};
#endif
