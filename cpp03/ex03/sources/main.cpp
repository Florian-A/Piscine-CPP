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

#include "../includes/DiamondTrap.hpp" //NOLINT

int main(void) {
    DiamondTrap cain("Cain");
    std::cout << "--" << std::endl;
    cain.attack("Abel");
    cain.takeDamage(50);
    cain.beRepaired(10);
    cain.guardGate();
    cain.highFivesGuys();
    cain.whoAmI();
    std::cout << "--" << std::endl;
    DiamondTrap abel(cain);
    abel.whoAmI();
    std::cout << "--" << std::endl;
    DiamondTrap agar("Agar");
    agar = cain;
    agar.whoAmI();
    std::cout << "--" << std::endl;
    DiamondTrap agrippa("Agrippa");
    agrippa.takeDamage(50);
    agrippa.beRepaired(10);
    agrippa.guardGate();
    agrippa.highFivesGuys();
    agrippa.whoAmI();
    std::cout << "--" << std::endl;
    return (0);
}
