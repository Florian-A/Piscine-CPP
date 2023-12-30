/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

// Constructors
Animal::Animal(void) : _type("null") {
    std::cout << "Animal default constructor called" << std::endl;
    return;
}
Animal::Animal(std::string const type) : _type(type) {
    std::cout << "Animal constructor called" << std::endl;
    return;
}

// Destructor
Animal::~Animal(void) {
    std::cout << "Animal destructor called" << std::endl;
    return;
}

// Copy constructor
Animal::Animal(const Animal &src) {
    *this = src;
    return;
}

// Assignation operator
Animal &Animal::operator=(const Animal &rhs) {
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);
}

// Copy constructor
void Animal::makeSound(void) const {
    std::cout << "Blop blop blop!" << std::endl;
}

std::string Animal::getType(void) const {
    return (this->_type);
}
