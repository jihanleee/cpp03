#ifndef FragTrap_HPP
# define FragTrap_HPP
# include <string>
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap &a);
		~FragTrap();
		FragTrap & operator = (const FragTrap &a);
		void attack(const std::string& target);
		void highFiveGuys(void);
};

#endif
