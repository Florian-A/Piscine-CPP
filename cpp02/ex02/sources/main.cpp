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

#include "../includes/Fixed.hpp" //NOLINT

int main(void) {
    std::cout << "[mandatory tests]" << std::endl;
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;

    std::cout << std::endl;
    std::cout << "[<Fixed>c increments]" << std::endl;
    Fixed c(10);

    std::cout << --c << std::endl;
    std::cout << c-- << std::endl;
    std::cout << --c << std::endl;
    std::cout << c-- << std::endl;

    std::cout << std::endl;
    std::cout << "[<Fixed>a is greater than <Fixed>c ?]" << std::endl;
    if (a > c) {
        std::cout << "a > c" << std::endl;
    } else {
        std::cout << "a < c" << std::endl;
    }

    std::cout << std::endl;
    std::cout << "[<Fixed>c operators]" << std::endl;
    std::cout << c + c << std::endl;
    std::cout << c - c << std::endl;
    std::cout << c * c << std::endl;
    std::cout << c / c << std::endl;
    std::cout << std::endl;
    std::cout << "[min max of <Fixed>c]" << std::endl;
    std::cout << Fixed::max(c, b) << std::endl;
    std::cout << Fixed::min(c, b) << std::endl;
    return (0);
}
