/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../includes/main.hpp" //NOLINT

HumanB::HumanB(const std::string name) : _name(name) {}

void HumanB::setWeapon(Weapon &weapon) {
        this->_weapon = &weapon;
}

void HumanB::attack(void) const {
        std::cout << this->_name << " attacks with their " << \
        this->_weapon->getType() << std::endl;
}

HumanB::~HumanB(void) {}
