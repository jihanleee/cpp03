#ifndef ScavTrap_HPP
# define ScavTrap_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap &a);
		~ScavTrap();
		ScavTrap & operator = (const ScavTrap &a);
		void attack(const std::string& target);
		void guardGate(void);
};

#endif
