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

class WrongCat : public WrongAnimal {
 public:
    // Constructors and destructors
    WrongCat(void); //NOLINT
    ~WrongCat(void);

    // Copy constructor and assignation operator overload
    WrongCat(const WrongCat &src);
    WrongCat &operator=(const WrongCat &rhs);

    // Methods
    void makeSound(void) const;
};
