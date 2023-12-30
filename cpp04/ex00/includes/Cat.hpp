#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "./main.hpp"

class Cat : public Animal {
 public:
    // Constructors and destructors
    Cat(void); //NOLINT
    ~Cat(void);

    // Copy constructor and assignation operator overload
    Cat(const Cat &src);
    Cat &operator=(const Cat &rhs);

    // Methods
    void makeSound(void) const;
};
