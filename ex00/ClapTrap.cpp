# include <string>
# include <iostream>
# include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "Default constructor called\n";
	_name = "NO NAME";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Claptrap constructor called\n";
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called\n";
}

ClapTrap::ClapTrap(ClapTrap &a) {
	std::cout << "Copy constructor called\n";
	_name = a._name;
	_hitPoints = a._hitPoints;
	_energyPoints = a._energyPoints;
	_attackDamage = a._attackDamage;
}

ClapTrap & ClapTrap::operator = (const ClapTrap &a) {
	_name = a._name;
	_hitPoints = a._hitPoints;
	_energyPoints = a._energyPoints;
	_attackDamage = a._attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target){
	if (_energyPoints > 0)
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "<< _attackDamage << " points of damage!\n";
	}
	else
		std::cout << "ClapTrap " << _name << "doesn't have enough energy";
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << _name << " lost " << amount << " of hit points.\n";
	_hitPoints -= amount;
	std::cout << "\t current hit point : " << _hitPoints << std::endl;
}

void ClapTrap::beRepared(unsigned int amount){
	std::cout << "ClapTrap " << _name << " gained " << amount << " of hit points.\n";
	_hitPoints += amount;
	std::cout << "\t current hit point : " << _hitPoints << std::endl;
}
