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
#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
 private:
    std::string _name;

 public:
    // Constructors and destructors
    DiamondTrap(void); //NOLINT
    DiamondTrap(std::string const name); //NOLINT
    virtual ~DiamondTrap(void);

    // Copy constructor and assignation operator overload
    DiamondTrap(const DiamondTrap &src);
    DiamondTrap &operator=(const DiamondTrap &rhs);

    // Methods
    void attack(std::string const &target);
    void whoAmI(void);
};
