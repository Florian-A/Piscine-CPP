/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

// Constructors
AAnimal::AAnimal(void) : _type("null") {
    std::cout << "Animal default constructor called" << std::endl;
    return;
}
AAnimal::AAnimal(std::string const type) : _type(type) {
    std::cout << "Animal constructor called" << std::endl;
    return;
}

// Destructor
AAnimal::~AAnimal(void) {
    std::cout << "Animal destructor called" << std::endl;
    return;
}

// Copy constructor
AAnimal::AAnimal(const AAnimal &src) {
    *this = src;
    return;
}

// Assignation operator
AAnimal &AAnimal::operator=(const AAnimal &rhs) {
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);
}

std::string AAnimal::getType(void) const {
    return (this->_type);
}
