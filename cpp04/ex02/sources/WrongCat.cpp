/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

// Constructors
WrongCat::WrongCat(void) {
    std::cout << "WrongCat default constructor called" << std::endl;
    this->_type = "WrongCat";
    return;
}

// Destructor
WrongCat::~WrongCat(void) {
    std::cout << "WrongCat destructor called" << std::endl;
    return;
}

// Copy constructor
WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src._type) {
    *this = src;
    return;
}

// Assignation operator
WrongCat &WrongCat::operator=(const WrongCat &rhs) {
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);
}

// Copy constructor
void WrongCat::makeSound(void) const {
    std::cout << "Gling gling gling!" << std::endl;
}
