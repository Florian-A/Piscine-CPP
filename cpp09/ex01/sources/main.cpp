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

#include <iostream>
#include <string>
#include "../includes/RPN.hpp"

int main(int argc, char **argv) {
    RPN rpn;
    std::string userInput;
    std::string elements;

    if (argc < 2) {
        std::cerr << "Error";
        return 1;
    }
    for (int i = 1; i < argc; i++) {
        userInput += argv[i];
        userInput += " ";
    }
    for (size_t i = 0; i < userInput.length(); i++) {
        elements += userInput[i];
        if (i != userInput.length() - 1) {
            elements += " ";
        }
    }
    try {
        const int result = rpn.calc(elements);
        std::cout << result << std::endl;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
