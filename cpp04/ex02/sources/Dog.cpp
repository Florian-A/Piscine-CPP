/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

// Constructors
Dog::Dog(void) {
    std::cout << "Dog default constructor called" << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
    return;
}

// Destructor
Dog::~Dog(void) {
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;
    return;
}

// Copy constructor
Dog::Dog(const Dog &src) : AAnimal(src._type) {
    this->_brain = 0;
    *this = src;
    return;
}

// Assignation operator
Dog &Dog::operator=(const Dog &rhs) {
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    delete this->_brain;
    this->_brain = new Brain(*rhs.getBrain());
    return (*this);
}

// Copy constructor
void Dog::makeSound(void) const {
    std::cout << "Wouf!" << std::endl;
}
std::string Dog::getType(void) const {
    return (this->_type);
}
Brain *Dog::getBrain(void) const {
    return (this->_brain);
}
