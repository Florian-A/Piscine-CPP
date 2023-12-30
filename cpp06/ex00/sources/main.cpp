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

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return (1);
    }
    // Get fundamental scalar and build Cast object with him
    std::string inputString = argv[1];
    Cast castedString(inputString);

    castedString.detect();
    castedString.print();

    return (0);
}
