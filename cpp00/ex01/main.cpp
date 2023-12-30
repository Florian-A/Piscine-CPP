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

#include "./main.hpp" //NOLINT

int main(void) {
    PhoneBook phonebook;
    std::string cmd;

    while (1) {
        std::cout << LST_CMD << std::endl;
        std::cout << "> ";
        if (!std::getline(std::cin, cmd))
            break;
        if (cmd == "ADD") {
            if (phonebook.addContact() == TRUE) {
                std::cout << S_ADD << std::endl << std::endl;
            } else {
                std::cout << std::endl << E_ADD << std::endl << std::endl;
            }
        } else if (cmd == "SEARCH") {
            if (phonebook.showContactArr() == FALSE) {
                std::cout << E_SEARCH << std::endl << std::endl;
            }
        } else if (cmd == "EXIT") {
            break;
        } else {
            std::cout << E_CMD << std::endl;
        }
    }
    exit(EXIT_SUCCESS);
}
