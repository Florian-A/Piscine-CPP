/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./main.hpp" //NOLINT

std::string trim(const std::string &str1) {
    std::string str2(str1);
    std::string::size_type pos = str2.find_last_not_of(' ');
    if (pos != std::string::npos) {
        str2.erase(pos + 1);
        pos = str2.find_first_not_of(' ');
        if (pos != std::string::npos) str2.erase(0, pos);
    } else {
        str2.erase(str2.begin(), str2.end());
    }
    return str2;
}

int strIsDigit(const std::string &str1) {
    for (size_t i = 0; i < str1.length(); i++) {
        if (std::isdigit(str1[i]) == 0)
            return (FALSE);
    }
    return (TRUE);
}

int strIsPrint(const std::string &str1) {
    for (size_t i = 0; i < str1.length(); i++) {
        if (std::isprint(str1[i]) == 0)
            return (FALSE);
    }
    return (TRUE);
}
