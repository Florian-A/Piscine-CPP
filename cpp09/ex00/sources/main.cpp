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

#include <fstream>
#include <iostream>
#include <map>
#include <sstream>

#include "../includes/main.hpp" //NOLINT

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Error: no input file or more one file !\n";
        return (1);
    }

    try {
        BitcoinExchange bitcoinExchange;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
        return (1);
    }

    std::ifstream file(argv[1]);
    if (file) {
        std::string line;
        std::getline(file, line);
        while (std::getline(file, line)) {
            std::istringstream iss(line);
            std::string dateStr;
            std::getline(iss, dateStr, '|');

            std::string numberStr;
            iss >> numberStr;

            BitcoinExchange bitcoinExchange;
            bitcoinExchange.searchPortfolioValue(dateStr, numberStr);
        }
        file.close();
    } else {
        std::cout << "Error: can't open input file !\n" << std::endl;
        return (1);
    }
    return (0);
}
