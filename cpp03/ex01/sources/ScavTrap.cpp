/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp" //NOLINT

// Constructors
ScavTrap::ScavTrap(void) : ClapTrap("null") {
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    return;
}
ScavTrap::ScavTrap(std::string const name) : ClapTrap(name) {
    std::cout << "ScavTrap constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    return;
}

// Destructor
ScavTrap::~ScavTrap(void) {
    std::cout << "ScavTrap destructor called" << std::endl;
    return;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = src;
    return;
}

// Assignation operator
    ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
    std::cout << "ScavTrap assignation operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return (*this);
}

// Methods
void ScavTrap::attack(std::string const &target) {
    if (this->_energyPoints < 1) {
        std::cout << "ScavTrap " << this->_name \
        << " can't attack because has no energy left!" << std::endl;
        return;
    } else if (this->_hitPoints < 1) {
        std::cout << "ScavTrap " << this->_name << \
        " can't attack because it is dead !" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->_name << " attacks " \
    << target << ", causing " << this->_attackDamage \
    << " points of damage!" << std::endl;
    this->_energyPoints -= 1;
    return;
}
void ScavTrap::guardGate(void) const {
    if (this->_hitPoints < 1) {
        std::cout << "ScavTrap " << this->_name << \
        " can't entered in Gate keeper mode because it is dead !" << std::endl;
        return;
    }
    std::cout << "ScavTrap " << this->_name \
    << " has entered in Gate keeper mode" << std::endl;
    return;
}
