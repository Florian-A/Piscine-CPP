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

class WrongAnimal {
 protected:
    std::string _type;

 public:
    // Constructors and destructors
    WrongAnimal(void); //NOLINT
    WrongAnimal(std::string const name); //NOLINT
    virtual ~WrongAnimal(void);

    // Copy constructor and assignation operator overload
    WrongAnimal(const WrongAnimal &src);
    WrongAnimal &operator=(const WrongAnimal &rhs);

    // Methods
    void makeSound(void) const;
    std::string getType(void) const;
};
