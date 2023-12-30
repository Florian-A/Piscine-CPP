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
    return;
}

// Destructor
Cat::~Cat(void) {
    std::cout << "Cat destructor called" << std::endl;
    return;
}

// Copy constructor
Cat::Cat(const Cat &src) : Animal(src._type) {
    *this = src;
    return;
}

// Assignation operator
Cat &Cat::operator=(const Cat &rhs) {
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);
}

// Copy constructor
void Cat::makeSound(void) const {
    std::cout << "Miaou!" << std::endl;
}
