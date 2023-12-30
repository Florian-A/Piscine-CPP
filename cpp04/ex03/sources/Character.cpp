/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

// Constructors
Character::Character(void) {
    std::cout << "Character default constructor called" << std::endl;
    this->_name = "null";
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
    return;
}
Character::Character(std::string const &name) : _name(name) {
    std::cout << "Character constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
    return;
}

// Destructor
Character::~Character(void) {
    std::cout << "Character destructor called" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (this->_materia[i] != NULL) {
            delete this->_materia[i];
        }
    }
}

// Copy constructor and operator= overload
Character::Character(const Character &src) {
    std::cout << "Character copy constructor called" << std::endl;
    *this = src;
    return;
}
Character &Character::operator=(const Character &rhs) {
    std::cout << "Character operator= called" << std::endl;
    if (this != &rhs) {
        this->_name = rhs._name;
        for (int i = 0; i < 4; i++) {
            if (this->_materia[i] != NULL) {
                delete this->_materia[i];
            }
            this->_materia[i] = rhs._materia[i]->clone();
        }
    }
    return *this;
}

// Methods
std::string const &Character::getName() const {
    return this->_name;
}
void Character::equip(AMateria *materia) {
    std::cout << "Character equip called" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (this->_materia[i] == NULL) {
            this->_materia[i] = materia->clone();
            return;
        }
    }
}
void Character::unequip(int idx) {
    std::cout << "Character unequip called" << std::endl;
    if (idx < 0 || idx > 3)
        return;
    if (this->_materia[idx]) {
        this->_materia[idx] = NULL;
    }
}
void Character::use(int idx, ICharacter &target) {
    std::cout << "Character use called" << std::endl;
    if (idx < 0 || idx > 3)
        return;
    this->_materia[idx]->use(target);
}
