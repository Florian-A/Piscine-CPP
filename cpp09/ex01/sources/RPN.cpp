/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <fstream>
#include <iostream>
#include <vector>
#include "../includes/main.hpp" //NOLINT
#include "../includes/RPN.hpp" //NOLINT

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &src) {
    *this = src;
}

RPN &RPN::operator=(const RPN &rhs) {
    if (this != &rhs) {
        return *this;
    }
    return *this;
}

bool RPN::isOperator(std::string token) {
    return token == "+" || token == "-" || token == "*" || token == "/";
}

int RPN::calc(const std::string &elements) {
    std::istringstream iss(elements);
    std::string token;
    int operatorNb = 0;
    int numberNb = 0;
    int number = 0;

    while (iss >> token) {
        if (isOperator(token)) {
            operatorNb++;
        }
        if (!isOperator(token)) {
            std::istringstream convert(token);
            if (!(convert >> number)) {
                throw std::invalid_argument("Error");
            }
            numberNb++;
            if (number < 0 || number > 9)
                throw std::invalid_argument("Error");
            stack.push(number);
        } else {
            if (stack.size() == 0)
                throw std::invalid_argument("Error");
            int number2 = stack.top();
            stack.pop();
            if (stack.size() == 0)
                throw std::invalid_argument("Error");
            int number1 = stack.top();
            stack.pop();
            if (token == "+") {
                stack.push(number1 + number2);
            } else if (token == "-") {
                stack.push(number1 - number2);
            } else if (token == "*") {
                stack.push(number1 * number2);
            } else if (token == "/") {
                if (number2 == 0) {
                    throw std::invalid_argument("Error");
                } else {
                    stack.push(number1 / number2);
                }
            }
        }
    }
    if (operatorNb != numberNb - 1) {
        throw std::invalid_argument("Error");
    }
    return stack.top();
}
