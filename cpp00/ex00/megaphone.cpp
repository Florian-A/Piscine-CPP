/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

void pntToupper(char &c) { // NOLINT
  c = std::toupper(c);
}

int main(int argc, char **argv) {
    std::string msg = "0";
    (void)argc;

    if (argc < 2) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        exit(EXIT_SUCCESS);
    } else {
        for (int i = 1; i < argc; ++i) {
            msg = argv[i];
            for (std::string::iterator it = msg.begin(); it != msg.end(); \
            ++it) {
                pntToupper(*it);
            }
            if (i > 1)
                std::cout << " ";
            std::cout << msg;
        }
        std::cout << std::endl;
        exit(EXIT_SUCCESS);
    }
}
