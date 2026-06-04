#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& ScavName) : ClapTrap(ScavName){
    name = ScavName;
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "New Model detected ScavTrap " << name << " created from default constructor\n";
};

ScavTrap::ScavTrap(const ScavTrap& that) : ClapTrap(that) {
    std::cout << "New Model detected ScavTrap " << name << " created from copy constructor\n";
};

ScavTrap::~ScavTrap() {
    std::cout << "New Model detected ScavTrap " << name << " destroyed\n";
};

ScavTrap& ScavTrap::operator=(const ScavTrap& that) {

    if (this != &that)
    {
        this->name = that.name;
        this->hitPoints = that.hitPoints;
        this->energyPoints = that.energyPoints;
        this->attackDamage = that.attackDamage;
    }
    std::cout << "New model ScavTrap " << name << " created from copy assignment\n";
    return *this;
};

void ScavTrap::attack(const std::string& target)
{
    if (energyPoints > 0)
    {
        energyPoints -= 1;
        std::cout << "ScavTrap " << name << " attacks " << target <<  ", causing "
                << attackDamage << " points of damage! " << energyPoints << " energy points remaining\n";
    }
    else
        std::cout << "ScavTrap " << name << " is out of energy\n";
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " keeper mode activated\n";
}