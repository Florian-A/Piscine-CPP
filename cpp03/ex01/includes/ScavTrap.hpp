#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap {
 public:
    // Constructors and destructors
    ScavTrap(void); //NOLINT
    ScavTrap(std::string const name); //NOLINT
    ~ScavTrap(void);

    // Copy constructor and assignation operator overload
    ScavTrap(const ScavTrap &src);
    ScavTrap &operator=(const ScavTrap &rhs);

    // Methods
    void attack(std::string const &target);
    void guardGate(void) const;
};
