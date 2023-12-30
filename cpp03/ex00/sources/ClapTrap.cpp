/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp" //NOLINT

// Constructors
ClapTrap::ClapTrap(void) : _name("null"), _hitPoints(10), \
_energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
    return;
}
ClapTrap::ClapTrap(std::string const name) : _name(name), _hitPoints(10), \
_energyPoints(10), _attackDamage(0) {
    std::cout << "ClapTrap constructor called" << std::endl;
    return;
}

// Destructor
ClapTrap::~ClapTrap(void) {
    std::cout << "ClapTrap destructor called" << std::endl;
    return;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &src) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = src;
    return;
}

// Assignation operator
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return (*this);
}

// Methods
void ClapTrap::attack(std::string const &target) {
    if (this->_energyPoints < 1) {
        std::cout << "ClapTrap " << this->_name \
        << " can't attack because has no energy left!" << std::endl;
        return;
    } else if (this->_hitPoints < 1) {
        std::cout << "ClapTrap " << this->_name << \
        " can't attack because it is dead !" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " \
    << target << ", causing " << this->_attackDamage \
    << " points of damage!" << std::endl;
    this->_energyPoints -= 1;
    return;
}
void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_hitPoints < 1) {
        std::cout << "ClapTrap " << this->_name << " is already dead !" \
        << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " takes " \
    << amount << " points of damage!" << std::endl;
    this->_hitPoints -= amount;
    if (this->_hitPoints < 1) {
        std::cout << "ClapTrap " << this->_name << " is dead !" \
        << std::endl;
    }
    return;
}
void ClapTrap::beRepaired(unsigned int amount) {
    if (this->_energyPoints < 1) {
        std::cout << "ClapTrap " << this->_name \
        << " can't repair himself because has no energy left!" << std::endl;
        return;
    } else if (this->_hitPoints < 1) {
        std::cout << "ClapTrap " << this->_name << \
        " can't repair himself because it is dead !" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " is repaired by " \
    << amount << " points!" << std::endl;
    this->_hitPoints += amount;
    this->_energyPoints -= 1;
    return;
}
