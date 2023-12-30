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
#include "./ClapTrap.hpp"

class FragTrap : public ClapTrap {
 public:
    // Constructors and destructors
    FragTrap(void); //NOLINT
    FragTrap(std::string const name); //NOLINT
    ~FragTrap(void);

    // Copy constructor and assignation operator overload
    FragTrap(const FragTrap &src);
    FragTrap &operator=(const FragTrap &rhs);

    // Methods
    void highFivesGuys(void) const;
};
