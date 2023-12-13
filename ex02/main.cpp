#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
/* 	ClapTrap a("a");
	ClapTrap b( a );
	ClapTrap c("c"); */
	FragTrap fc("fragdude");

/* 	c = b; */
	fc.attack("dumb guy");
	fc.takeDamage(10);
	fc.beRepared(10);
	fc.highFiveGuys();
	return (0);
}
