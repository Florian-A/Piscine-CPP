/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

// Constructors
Ice::Ice(void) {
    std::cout << "Ice default constructor called" << std::endl;
    this->_type = "ice";
}

// Destructor
Ice::~Ice(void) {
    std::cout << "Ice destructor called" << std::endl;
}

// Copy constructor
Ice::Ice(const Ice &src) : AMateria(src._type) {
    std::cout << "Ice copy constructor called" << std::endl;
    *this = src;
    return;
}

// Assignation operator
Ice &Ice::operator=(const Ice &rhs) {
    std::cout << "Ice operator= called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);
}

Ice* Ice::clone() const {
    std::cout << "Ice clone called" << std::endl;
    return (new Ice());
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << \
    target.getName() << " *" << std::endl;
}
