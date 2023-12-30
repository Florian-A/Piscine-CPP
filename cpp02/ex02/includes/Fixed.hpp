#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include <string>

class Fixed {
 private:
      int _fixedPointValue;
      static const int _fractionalBits;

 public:
      // Constructors and destructors
      Fixed(void); //NOLINT
      Fixed(const int n); //NOLINT
      Fixed(const float n); //NOLINT
      ~Fixed(void);

      // Copy constructor and assignation operator overload
      Fixed(const Fixed &src);
      Fixed& operator=(const Fixed &rhs);

      // Increment and decrement operators
      Fixed operator++();
      Fixed operator++(int);
      Fixed operator--();
      Fixed operator--(int);

      // Arithmetic operators
      bool operator>(Fixed const &rhs) const;
      bool operator<(Fixed const &rhs) const;
      bool operator>=(Fixed const &rhs) const;
      bool operator<=(Fixed const &rhs) const;
      bool operator==(Fixed const &rhs) const;
      bool operator!=(Fixed const &rhs) const;
      Fixed operator+(Fixed const &rhs) const;
      Fixed operator-(Fixed const &rhs) const;
      Fixed operator*(Fixed const &rhs) const;
      Fixed operator/(Fixed const &rhs) const;

      // Getters and setters
      int getRawBits(void) const;
      void setRawBits(int const raw);
      float toFloat(void) const;
      int toInt(void) const;

      // Min and max
      static Fixed& min(Fixed &a, Fixed &b); //NOLINT
      static Fixed& max(Fixed &a, Fixed &b); //NOLINT
      static Fixed const &min(Fixed const &a, Fixed const &b);
      static Fixed const &max(Fixed const &a, Fixed const &b); //NOLINT
};

// Overload of the output operator
std::ostream &operator<<(std::ostream &ost, const Fixed &src);
