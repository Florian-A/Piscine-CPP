/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

// Constructors
Cure::Cure(void) {
    this->_type = "cure";
    std::cout << "Cure default constructor called" << std::endl;
}

// Destructor
Cure::~Cure(void) {
    std::cout << "Cure destructor called" << std::endl;
}

// Copy constructor
Cure::Cure(const Cure &src) : AMateria(src._type) {
    std::cout << "Cure copy constructor called" << std::endl;
    *this = src;
    return;
}

// Assignation operator
Cure &Cure::operator=(const Cure &rhs) {
    std::cout << "Cure operator= called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    return (*this);
}

Cure* Cure::clone() const {
    std::cout << "Cure clone called" << std::endl;
    return (new Cure());
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() \
    << "’s wounds *" << std::endl;
}
