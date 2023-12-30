/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

// Constructors
WrongAnimal::WrongAnimal(void) : _type("null") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
    return;
}
WrongAnimal::WrongAnimal(std::string const type) : _type(type) {
    std::cout << "WrongAnimal constructor called" << std::endl;
    return;
}

// Destructor
WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal destructor called" << std::endl;
    return;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &src) {
    *this = src;
    return;
}

// Assignation operator
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);
}

// Copy constructor
void WrongAnimal::makeSound(void) const {
    std::cout << "Bzzzzzzzzzr!" << std::endl;
}
std::string WrongAnimal::getType(void) const {
    return (this->_type);
}
