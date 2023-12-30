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

#include "../includes/main.hpp" //NOLINT

void printInt(int &num) { //NOLINT
    std::ostringstream oss;
    oss << num;
    std::string numStr = oss.str();
    std::cout << numStr << std::endl;
}


int main(void) {
    int tab[] = {0, 1, 2, 3, 4};
    iter(tab, 5, printInt);
    std::cout << std::endl;
    return 0;
}
