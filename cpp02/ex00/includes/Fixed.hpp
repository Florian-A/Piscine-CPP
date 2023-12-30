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
#include <string>

class Fixed {
 private:
     int _fixedPointValue;
     static const int _fractionalBits;

 public:
     // Constructors and destructors
     Fixed(void); //NOLINT
     ~Fixed(void);

     // Copy constructor and assignation operator overload
     Fixed(const Fixed &src);
     Fixed& operator=(const Fixed &rhs);

     // Getters and setters
     int getRawBits(void) const;
     void setRawBits(int const raw);
};
