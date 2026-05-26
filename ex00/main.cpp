#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a;
    ClapTrap b("Marcosto");
    ClapTrap c = b;
    b.takeDamage(1);
    c.beRepaired(1);
    a = c;
}