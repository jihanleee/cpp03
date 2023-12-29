#include <iostream>
#include "ClapTrap.hpp"


int main( void ) {
	ClapTrap a("a");
	ClapTrap b( a );
	ClapTrap c("c");

	c = b;
	b.attack("dumb guy");
	b.takeDamage(10);
	b.beRepared(10);
	c.attack("dumb guy");
	c.takeDamage(10);
	c.beRepared(10);
	return (0);
}
