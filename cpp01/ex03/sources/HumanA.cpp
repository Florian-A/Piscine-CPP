/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

HumanA::HumanA(const std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {} //NOLINT

void HumanA::attack(void) const {
        std::cout << this->_name << " attacks with their " << \
        this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(void) {}
