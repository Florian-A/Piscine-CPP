/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp" //NOLINT

// Constructors
DiamondTrap::DiamondTrap(void) : ClapTrap("null_clap_name"), ScavTrap(), \
FragTrap(), _name("null") {
    std::cout << "DiamondTrap default constructor called" << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    return;
}
DiamondTrap::DiamondTrap(std::string const name) :
ClapTrap(name + "_clap_name"),
ScavTrap(), FragTrap(), _name(name) {
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
    return;
}

// Destructor
DiamondTrap::~DiamondTrap(void) {
    std::cout << "DiamondTrap destructor called" << std::endl;
    return;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap &src)
: ClapTrap(src._name + "_clap_name"), ScavTrap(), FragTrap(), _name(src._name) {
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = src;
    return;
}

// Assignation operator
    DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->ClapTrap::_name = rhs._name + "_clap_name";
    this->_name = rhs._name;
    this->_hitPoints = rhs._hitPoints;
    this->_energyPoints = rhs._energyPoints;
    this->_attackDamage = rhs._attackDamage;
    return (*this);
}

// Methods
void DiamondTrap::attack(std::string const &target) {
    this->ScavTrap::attack(target);
}
void DiamondTrap::whoAmI(void) {
    std::cout << "DiamondTrap " << this->_name << " is a " \
    << this->ClapTrap::_name << std::endl;
}
