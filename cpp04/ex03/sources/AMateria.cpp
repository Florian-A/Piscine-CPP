/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

// Constructors
AMateria::AMateria(void) : _type("null") {
    std::cout << "AMateria default constructor called" << std::endl;
}
AMateria::AMateria(std::string const &type) : _type(type) {
    std::cout << "AMateria constructor called" << std::endl;
}

// Destructor
AMateria::~AMateria(void) {
    std::cout << "AMateria destructor called" << std::endl;
}

// Copy constructor
AMateria::AMateria(const AMateria &src) {
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = src;
    return;
}

// Assignation operator
AMateria &AMateria::operator=(const AMateria &rhs) {
    std::cout << "AMateria operator= called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);
}

void AMateria::use(ICharacter &target) {
    std::cout << "AMateria use on " << target.getName() << std::endl;
}

std::string const &AMateria::getType() const {
    return (this->_type);
}
