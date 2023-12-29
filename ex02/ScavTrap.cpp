# include <string>
# include <iostream>
# include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default constructor called\n";
	_name = "NO NAME";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap constructor called\n";
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor called\n";
}

ScavTrap::ScavTrap(ScavTrap &a) :ClapTrap(){
	std::cout << "Copy constructor called\n";
	_name = a._name;
	_hitPoints = a._hitPoints;
	_energyPoints = a._energyPoints;
	_attackDamage = a._attackDamage;
}

ScavTrap & ScavTrap::operator = (const ScavTrap &a) {
	_name = a._name;
	_hitPoints = a._hitPoints;
	_energyPoints = a._energyPoints;
	_attackDamage = a._attackDamage;
	return (*this);
}

void ScavTrap::attack(const std::string& target){
	if (_energyPoints > 0)
	{
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "<< _attackDamage << " points of damage!\n";
	}
	else
		std::cout << "ScavTrap " << _name << "doesn't have enough energy";
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << _name << " is now in gatekeeper mode\n";
};
/* 
void ScavTrap::attack(const std::string& target){
	if (_energyPoints > 1)
	{
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "<< _attackDamage << " points of damage!\n";
	}
	else
		std::cout << "ScavTrap " << _name << "doesn't have enough energy";
}

void ScavTrap::takeDamage(unsigned int amount){
	std::cout << "ScavTrap " << _name << " lost " << amount << " of hit points.\n";
	_hitPoints -= amount;
	std::cout << "\t current hit point : " << _hitPoints << std::endl;
}

void ScavTrap::beRepared(unsigned int amount){
	std::cout << "ScavTrap " << _name << " gained " << amount << " of hit points.\n";
	_hitPoints += amount;
	std::cout << "\t current hit point : " << _hitPoints << std::endl;
}
 */