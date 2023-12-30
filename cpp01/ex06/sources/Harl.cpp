/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp"

Harl::Harl(void) {}

void Harl::debug(void) {
        std::cout << "[ DEBUG ]" << std::endl;
        std::cout << DEBUG_MSG << std::endl << std::endl;
}

void Harl::info(void) {
        std::cout << "[ INFO ]" << std::endl;
        std::cout << INFO_MSG << std::endl << std::endl;
}

void Harl::warning(void) {
        std::cout << "[ WARNING ]" << std::endl;
        std::cout << WARNING_MSG << std::endl << std::endl;
}

void Harl::error(void) {
        std::cout << "[ ERROR ]" << std::endl;
        std::cout << ERROR_MSG << std::endl << std::endl;
}

void Harl::unknown(void) {
        std::cout << UNKNOWN_MSG << std::endl;
}

void Harl::complain(std::string level) {
    int     debugCase;
    t_level debugLevel[4] = {
        {"DEBUG", 0},
        {"INFO", 1},
        {"WARNING", 2},
        {"ERROR", 3}
    };
    for (int i = 0; i < 4; i++) {
        if (debugLevel[i].debugString == level) {
            debugCase = debugLevel[i].debugCase;
            break;
        }
        if (i == 3) {
            debugCase = -1;
        }
    }
    switch (debugCase) {
        case 0:
            this->debug();
            break;
        case 1:
            this->info();
            break;
        case 2:
            this->warning();
            break;
        case 3:
            this->error();
            break;
        default:
            this->unknown();
            break;
    }
}

Harl::~Harl(void) {}
