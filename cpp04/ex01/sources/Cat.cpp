/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

// Constructors
Cat::Cat(void) {
    std::cout << "Cat default constructor called" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
    return;
}

// Destructor
Cat::~Cat(void) {
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
    return;
}

// Copy constructor
Cat::Cat(const Cat &src) : Animal(src._type) {
    this->_brain = 0;
    *this = src;
    return;
}

// Assignation operator
Cat &Cat::operator=(const Cat &rhs) {
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    delete this->_brain;
    this->_brain = new Brain(*rhs.getBrain());
    return (*this);
}

// Methods
void Cat::makeSound(void) const {
    std::cout << "Miaou!" << std::endl;
}
Brain *Cat::getBrain(void) const {
    return (this->_brain);
}
