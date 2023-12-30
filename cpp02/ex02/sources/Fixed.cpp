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
Fixed::Fixed(void) : _fixedPointValue(0) {}
/*
! Multiply by 2^8 
*/
Fixed::Fixed(int const n) {
    this->_fixedPointValue = n << this->_fractionalBits;
}
/*
! Multiply by 2^8 and round
*/
Fixed::Fixed(float const n) {
    this->_fixedPointValue = roundf(n * (1 << this->_fractionalBits));
}

// Destructor
Fixed::~Fixed(void) {}

// Copy constructor
Fixed::Fixed(const Fixed &src) {
    this->_fixedPointValue = src.getRawBits();
    return;
}

// Assignation operator
Fixed & Fixed::operator=(const Fixed &rhs) {
    this->_fixedPointValue = rhs.getRawBits();
    return (*this);
}

// Increment and decrement operators
Fixed   Fixed::operator++() {
    this->_fixedPointValue++;
    return (*this);
}
Fixed   Fixed::operator++(int) {
    const Fixed     fixedCopy(*this);

    this->operator++();
    return (fixedCopy);
}
Fixed   Fixed::operator--() {
    this->_fixedPointValue--;
    return (*this);
}

Fixed   Fixed::operator--(int) {
    const Fixed     fixedCopy(*this);

    this->operator--();
    return (fixedCopy);
}

// Arithmetic operators
bool    Fixed::operator>(Fixed const &rhs) const {
    return (this->toFloat() > rhs.toFloat());
}
bool    Fixed::operator<(Fixed const &rhs) const {
    return (this->toFloat() < rhs.toFloat());
}
bool    Fixed::operator>=(Fixed const &rhs) const {
    return (this->toFloat() >= rhs.toFloat());
}
bool    Fixed::operator<=(Fixed const &rhs) const {
    return (this->toFloat() <= rhs.toFloat());
}
bool    Fixed::operator==(Fixed const &rhs) const {
    return (this->toFloat() == rhs.toFloat());
}
bool    Fixed::operator!=(Fixed const &rhs) const {
    return (this->toFloat() != rhs.toFloat());
}
Fixed   Fixed::operator+(Fixed const &rhs) const {
    return (this->toFloat() + rhs.toFloat());
}
Fixed   Fixed::operator-(Fixed const &rhs) const {
    return (this->toFloat() - rhs.toFloat());
}
Fixed   Fixed::operator*(Fixed const &rhs) const {
    return (this->toFloat() * rhs.toFloat());
}
Fixed   Fixed::operator/(Fixed const &rhs) const {
    return (this->toFloat() / rhs.toFloat());
}

// Getters and setters
int Fixed::getRawBits(void) const {
    return (this->_fixedPointValue);
}
void Fixed::setRawBits(int const raw) {
    this->_fixedPointValue = raw;
}
// Bit shift, division by 256
float Fixed::toFloat(void) const {
    return (this->_fixedPointValue / (float)(1 << this->_fractionalBits)); //NOLINT
}
// Bit shift, multiplication by 256
int Fixed::toInt(void) const {
    return (this->_fixedPointValue / (1 << this->_fractionalBits));
}

// Min and max
Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return (a < b ? a : b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return (a > b ? a : b);
}
Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
    return (a < b ? a : b);
}
Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
    return (a > b ? a : b);
}

// Overload of the output operator
std::ostream& operator<<(std::ostream &ost, const Fixed &src) {
    ost << src.toFloat();
    return (ost);
}
