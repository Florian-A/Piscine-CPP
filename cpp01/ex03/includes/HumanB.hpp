#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

class HumanB {
 private:
    std::string _name;
    Weapon *_weapon;

 public:
      HumanB(const std::string name); //NOLINT
      void setWeapon(Weapon &weapon); //NOLINT
      void attack(void) const;
      ~HumanB(void);
};

