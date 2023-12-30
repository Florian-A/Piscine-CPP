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

#include "../includes/ClapTrap.hpp" //NOLINT

int main(void) {
    ClapTrap cain("Cain");
    ClapTrap abel("Abel");
    std::cout << "--" << std::endl;
    for (int i = 0; i < 5; i++) {
        cain.attack("Abel");
    }
    std::cout << "God deals 5 damage to Abel" << std::endl;
    abel.takeDamage(5);
    abel.beRepaired(5);
    for (int i = 0; i < 10; i++) {
        cain.attack("Abel");
    }
    std::cout << "God deals 10 damage to Abel" << std::endl;
    abel.takeDamage(10);
    abel.attack("Cain");
    abel.beRepaired(10);
    std::cout << "--" << std::endl;
    return (0);
}
