#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <vector>
#include <stack>
#include <sstream>
#include <cstdlib>
#include <cctype>

class RPN {
 private:
    std::stack<double> stack;
    bool isOperator(std::string token);
 public:
    RPN();
    ~RPN();

    RPN(const RPN &src);
    RPN &operator=(const RPN &rhs);

    int calc(const std::string &expression);
};
