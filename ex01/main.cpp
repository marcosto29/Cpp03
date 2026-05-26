#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    // ClapTrap a;
    // ClapTrap b("Marcosto");
    // ClapTrap c = b;
    // b.takeDamage(1);
    // c.beRepaired(1);
    // a = c;

    ScavTrap d;
    ScavTrap e("Marcosto01");
    ScavTrap f = e;
    e.takeDamage(1);
    f.beRepaired(1);
    d = f;
    d.guardGate();
}