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

class Cure : public AMateria {
 public:
    // Constructors and destructors
    Cure(void); //NOLINT
    ~Cure(void);

    // Copy constructor and assignation operator overload
    Cure(const Cure &src);
    Cure &operator=(const Cure &rhs);

    // Methods
    Cure *clone(void) const;
    void use(ICharacter &target); //NOLINT
};
