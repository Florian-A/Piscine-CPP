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

int main() {
    Span sp1 = Span(5);
    sp1.addNumber(6);
    sp1.addNumber(3);
    sp1.addNumber(17);
    sp1.addNumber(9);
    sp1.addNumber(11);
    std::cout << sp1.shortestSpan() << std::endl;
    std::cout << sp1.longestSpan() << std::endl;

    try {
        sp1.addNumber(392);
    }  catch (std::exception &exception) {
        std::cerr << exception.what() << std::endl;
    }

    Span sp2 = Span(7);
    sp2.addNumber(6);
    sp2.addNumber(20);
    std::vector<int> tab1;
    int array1[] = {43, 3, 23, 1003, 9282};
    for (unsigned long i = 0; i < sizeof(array1) / sizeof(array1[0]); i++) { //NOLINT
        tab1.push_back(array1[i]);
    }
    sp2.addNumber(tab1);
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;

    Span sp3 = Span(100000);
    for (int i = 0; i < 100000; i++) {
        sp3.addNumber(i);
    }

    std::cout << sp3.shortestSpan() << std::endl;
    std::cout << sp3.longestSpan() << std::endl;
    return (0);
}
