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
    // Bad Bureaucrats
    try {
        Bureaucrat *badBob1 = new Bureaucrat("", 10);
        delete badBob1;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat *badBob2 = new Bureaucrat("Bob", 0);
        delete badBob2;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat *badBob3 = new Bureaucrat("Bob", 151);
        delete badBob3;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    Bureaucrat *bob = NULL;
    // Instantiation of a Bureaucrat
    try {
        bob = new Bureaucrat("Bob", 10);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // Test of the mutators
    try {
        if (bob != NULL) {
            bob->incrementGrade();
            std::cout << *bob << std::endl;
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        if (bob != NULL) {
            bob->decrementGrade();
            std::cout << *bob << std::endl;
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    delete bob;
    return (0);
}
