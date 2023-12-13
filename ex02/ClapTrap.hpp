#ifndef ClapTrap_HPP
# define ClapTrap_HPP
# include <string>
# include <iostream>

class ClapTrap{
	protected:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap &a);
		~ClapTrap();
		ClapTrap & operator = (const ClapTrap &a);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepared(unsigned int amount);
};

#endif
