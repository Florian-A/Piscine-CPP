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

class AAnimal {
 protected:
    std::string _type;

 public:
    // Constructors and destructors
    AAnimal(void); //NOLINT
    AAnimal(std::string const name); //NOLINT
    virtual ~AAnimal(void);

    // Copy constructor and assignation operator overload
    AAnimal(const AAnimal &src);
    AAnimal &operator=(const AAnimal &rhs);

    // Methods
    virtual void makeSound(void) const = 0;
    virtual std::string getType(void) const;
};
