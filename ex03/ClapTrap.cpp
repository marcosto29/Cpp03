#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name(), hitPoints(), energyPoints(), attackDamage(){
    std::cout << "ClapTrap " << name << " created from default constructor!!!\n";
};

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "ClapTrap " << name << " created from parameter constructor!!!\n";
};

ClapTrap::ClapTrap(const ClapTrap& that) : name(that.name), hitPoints(that.hitPoints), energyPoints(that.energyPoints), attackDamage(that.attackDamage) {
    std::cout << "ClapTrap " << name << " created from copy constructor!!!\n";
};

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destroyed\n";
};

ClapTrap& ClapTrap::operator=(const ClapTrap& that)
{
    if (this != &that)
    {
        this->name = that.name;
        this->hitPoints = that.hitPoints;
        this->energyPoints = that.energyPoints;
        this->attackDamage = that.attackDamage;
    }
    std::cout << "ClapTrap " << name << " created from copy assignment\n";
    return *this;
};

void ClapTrap::attack(const std::string& target)
{
    if (energyPoints > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target <<  ", causing "
                << attackDamage << " points of damage!\n";
        energyPoints -= 1;
    }
    else
        std::cout << "ClapTrap " << name << " is out of energy\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << name << " takes " << amount <<  " points of damage\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints > 0)
    {
        std::cout << "ClapTrap " << name << " repair " << amount <<  " points of damage\n";
        energyPoints -= 1;
    }
    else
        std::cout << "ClapTrap " << name << " is out of energy\n";
}