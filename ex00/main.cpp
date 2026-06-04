#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a;
    ClapTrap b("Marcosto");
    ClapTrap c = b;
    ClapTrap d ( b );
    ClapTrap e("Macosto02");
    b.takeDamage(1);
    b.takeDamage(1);
    b.takeDamage(1);
    e.beRepaired(1);
    e.beRepaired(1);
    e.beRepaired(1);
    e.beRepaired(1);
    a.attack("Marcosto02");
    a = c;
}