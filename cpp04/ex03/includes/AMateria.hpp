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
#include "./ICharacter.hpp"

class AMateria {
 protected:
    std::string _type;

 public:
    // Constructors and destructors
    AMateria(void);
    AMateria(std::string const &type); //NOLINT
    virtual ~AMateria(void);

    // Constructor by copy and operator= overload
    AMateria(const AMateria &src);
    AMateria &operator=(const AMateria &rhs);

    // Getters and setters
    std::string const &getType(void) const;
    virtual AMateria* clone(void) const = 0;
    virtual void use(ICharacter &target); //NOLINT
};
