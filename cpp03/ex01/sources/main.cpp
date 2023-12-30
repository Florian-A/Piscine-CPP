/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp" //NOLINT

int main(void) {
    ScavTrap cain("Cain");
    ScavTrap abel("Abel");
    ScavTrap henoch("Hénoch");
    std::cout << "--" << std::endl;
    for (int i = 0; i < 4; i++) {
        cain.attack("Abel");
        abel.takeDamage(20);
    }
    abel.guardGate();
    abel.beRepaired(920);
    for (int i = 0; i < 47; i++) {
        cain.attack("Abel");
        abel.takeDamage(20);
    }
    std::cout << "God deals 10 damage to Abel" << std::endl;
    abel.takeDamage(10);
    abel.beRepaired(10);
    abel.guardGate();
    std::cout << "--" << std::endl;
    henoch.attack("Evil");
    henoch = abel;
    henoch.attack("Evil");
    std::cout << "--" << std::endl;
    return (0);
}
