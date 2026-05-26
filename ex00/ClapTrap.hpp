#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        int         hitPoints;
        int         energyPoints;
        int         attackDamage;
    public:
        ClapTrap();
        ClapTrap(const std::string& name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &that);
        ClapTrap&   operator=(const ClapTrap& that);
        void        attack(const std::string& target);
        void        takeDamage(unsigned int amount);
        void        beRepaired(unsigned int amount);
};