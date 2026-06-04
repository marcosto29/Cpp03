#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(const std::string& ScavName = "Cool ScavTrap");
        ScavTrap(const ScavTrap& that);
        ~ScavTrap();
        ScavTrap&   operator=(const ScavTrap& that);
        void        attack(const std::string& target);
        void        guardGate();
};

#endif