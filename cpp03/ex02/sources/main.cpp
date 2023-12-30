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

#include "../includes/FragTrap.hpp" //NOLINT

int main(void) {
    FragTrap cain("Cain");
    FragTrap abel("Abel");
    FragTrap henoch("Hénoch");
    std::cout << "--" << std::endl;
    for (int i = 0; i < 3; i++) {
        cain.attack("Abel");
        abel.takeDamage(30);
    }
    abel.highFivesGuys();
    abel.beRepaired(1410);
    for (int i = 0; i < 47; i++) {
        cain.attack("Abel");
        abel.takeDamage(30);
    }
    std::cout << "God deals 10 damage to Abel" << std::endl;
    abel.takeDamage(10);
    abel.beRepaired(10);
    abel.highFivesGuys();
    std::cout << "--" << std::endl;
    henoch.attack("Evil");
    henoch = abel;
    henoch.attack("Evil");
    FragTrap agar(cain);
    agar.attack("Evil");
    std::cout << "--" << std::endl;
    return (0);
}
