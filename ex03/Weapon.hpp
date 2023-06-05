#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Human {
    public:
        void Weapon(void);
        void ~Weapon(void);
        const std::string getType(void);
        void setType(std::string type);
    private:
        std::string _type;
};

#endif
