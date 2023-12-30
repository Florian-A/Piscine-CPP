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
#include "../includes/main.hpp" //NOLINT

#define MAX_VAL 750
int main(int, char**) {
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++) {
        const int value = rand(); //NOLINT
        numbers[i] = value;
        mirror[i] = value;
    } {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++) {
        if (mirror[i] != numbers[i]) {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try {
        numbers[-2] = 0;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    try {
        numbers[MAX_VAL] = 0;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < MAX_VAL; i++) {
        numbers[i] = rand(); //NOLINT
    }
    try {
        numbers[MAX_VAL] = 0;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    try {
        std::cout << numbers[250] << std::endl;
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << '\n';
    }
    delete [] mirror;
    return 0;
}
