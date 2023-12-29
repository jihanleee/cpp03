#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
/* 	ClapTrap a("a");
	ClapTrap b( a );
	ClapTrap c("c"); */
	ScavTrap sc("scavdude");
/* 	c = b; */
	sc.attack("dumb guy");
	sc.takeDamage(10);
	sc.beRepared(10);
	sc.guardGate();
	return (0);
}
