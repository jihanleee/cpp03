# include <string>
# include <iostream>
# include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap Default constructor called\n";
	_name = "NO NAME";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap constructor called\n";
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor called\n";
}

FragTrap::FragTrap(FragTrap &a) :ClapTrap(){
	std::cout << "Copy constructor called\n";
	_name = a._name;
	_hitPoints = a._hitPoints;
	_energyPoints = a._energyPoints;
	_attackDamage = a._attackDamage;
}

FragTrap & FragTrap::operator = (const FragTrap &a) {
	_name = a._name;
	_hitPoints = a._hitPoints;
	_energyPoints = a._energyPoints;
	_attackDamage = a._attackDamage;
	return (*this);
}

void FragTrap::attack(const std::string& target){
	if (_energyPoints > 1)
	{
		_energyPoints--;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing "<< _attackDamage << " points of damage!\n";
	}
	else
		std::cout << "FragTrap " << _name << "doesn't have enough energy";
}

void FragTrap::highFiveGuys(void) {
	std::cout << _name << ": High five guys! ...guys..?\n";
};
/*
void FragTrap::attack(const std::string& target){
	if (_energyPoints > 1)
	{
		_energyPoints--;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing "<< _attackDamage << " points of damage!\n";
	}
	else
		std::cout << "FragTrap " << _name << "doesn't have enough energy";
}

void FragTrap::takeDamage(unsigned int amount){
	std::cout << "FragTrap " << _name << " lost " << amount << " of hit points.\n";
	_hitPoints -= amount;
	std::cout << "\t current hit point : " << _hitPoints << std::endl;
}

void FragTrap::beRepared(unsigned int amount){
	std::cout << "FragTrap " << _name << " gained " << amount << " of hit points.\n";
	_hitPoints += amount;
	std::cout << "\t current hit point : " << _hitPoints << std::endl;
}
 */