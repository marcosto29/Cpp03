#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string name;
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap& that);
        DiamondTrap(const std::string& name);
        DiamondTrap& operator=(const DiamondTrap& that);
        void        attack();
        void        whoAmI();
};

#endif