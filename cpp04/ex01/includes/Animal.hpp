#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "./main.hpp"

class Animal {
 protected:
    std::string _type;

 public:
    // Constructors and destructors
    Animal(void); //NOLINT
    Animal(std::string const name); //NOLINT
    virtual ~Animal(void);

    // Copy constructor and assignation operator overload
    Animal(const Animal &src);
    Animal &operator=(const Animal &rhs);

    // Methods
    virtual void makeSound(void) const;
    std::string getType(void) const;
};
