/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp" //NOLINT

// Constructors
FragTrap::FragTrap(void) : ClapTrap("null") {
    std::cout << "FragTrap default constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    return;
}
FragTrap::FragTrap(std::string const name) : ClapTrap(name) {
    std::cout << "FragTrap constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    return;
}

// Destructor
FragTrap::~FragTrap(void) {
    std::cout << "FragTrap destructor called" << std::endl;
    return;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = src;
    return;
}

// Assignation operator
    FragTrap &FragTrap::operator=(const FragTrap &rhs) {
    std::cout << "FragTrap assignation operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return (*this);
}

// Methods
void FragTrap::highFivesGuys(void) const {
    if (this->_hitPoints < 1) {
        std::cout << "FragTrap " << this->_name << \
        " can't give a high five because it is dead !" << std::endl;
        return;
    }
    std::cout << "FragTrap " << this->_name \
    << " gives a high five!" << std::endl;
    return;
}
