#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
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
    return *this;
    std::cout << "Ne model ScavTrap " << name << " created from copy assignment\n";

};

void    ScavTrap::attack(const std::string& target)
{
    if (energyPoints > 0)
    {
        std::cout << "ScavTrap attacking " << target << "\n";
        energyPoints -= 1;
    }
    else
       std::cout << "ClapTrap " << name << " is out of energy\n"; 
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " keeper mode activated\n";
}