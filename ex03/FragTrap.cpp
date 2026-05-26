#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "New Model detected FragTrap " << name << " created from default constructor\n";
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "New Model detected FragTrap " << name << " created from parameter constructor\n";
}

FragTrap::FragTrap(const FragTrap& that) : ClapTrap(that) {
    std::cout << "New Model detected FragTrap " << name << " created from copy constructor\n";
}

FragTrap::~FragTrap(){
    std::cout << "New Model detected FragTrap " << name << " destroyed\n";
}

FragTrap& FragTrap::operator=(const FragTrap& that)
{
    if (this != &that)
    {
        this->name = that.name;
        this->hitPoints = that.hitPoints;
        this->energyPoints = that.energyPoints;
        this->attackDamage = that.attackDamage;
    }
    std::cout << "New model FragTrap " << name << " created from copy assignment\n";
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << name << " kindly asks for a high-five\n";
}