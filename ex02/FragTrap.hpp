#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(const std::string& FragName = "Cool FragTrap");
        FragTrap(const FragTrap& that);
        ~FragTrap();
        void        attack(const std::string& target);
        FragTrap&   operator=(const FragTrap& that);
        void        highFivesGuys(void);   
};

#endif