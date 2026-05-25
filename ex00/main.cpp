#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Marcosto01");
    ClapTrap b("Ividraco01");
    ClapTrap c = b;
    a.attack("Ividraco01");
    b.takeDamage(1);
    b.beRepaired(1);
}