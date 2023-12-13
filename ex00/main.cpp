#include <iostream>
#include "ClapTrap.hpp"

int main( void ) {
	ClapTrap a("a");
	ClapTrap b( a );
	ClapTrap c("c");

	c = b;
	b.attack("dumb guy");
	return (0);
}
