/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp" //NOLINT

const int Fixed::_fractionalBits = 8;

// Constructors
Fixed::Fixed(void) : _fixedPointValue(0) {
    std::cout << "Default constructor called" << std::endl;
}
/*
! Multiply by 2^8 
*/
Fixed::Fixed(int const n) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = n << this->_fractionalBits;
}
/*
! Multiply by 2^8 and round
*/
Fixed::Fixed(float const n) {
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(n * (1 << this->_fractionalBits));
}

// Destructor
Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &src) {
    std::cout << "Copy constructor called" << std::endl;
    this->_fixedPointValue = src.getRawBits();
    return;
}

// Assignation operator
Fixed &Fixed::operator=(const Fixed &rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixedPointValue = rhs.getRawBits();
    return (*this);
}

// Getters and setters
int Fixed::getRawBits(void) const {
    return (this->_fixedPointValue);
}
void Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
}
float Fixed::toFloat(void) const {
    return (this->_fixedPointValue / (float)(1 << this->_fractionalBits)); //NOLINT
}
int Fixed::toInt(void) const {
    return (this->_fixedPointValue / (1 << this->_fractionalBits));
}

// Overload of the output operator
std::ostream &operator<<(std::ostream& ost, const Fixed &src) {
    ost << src.toFloat();
    return (ost);
}
