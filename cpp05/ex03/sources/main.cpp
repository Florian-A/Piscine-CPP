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
    Intern  clotilde;

    Bureaucrat *arold = NULL;
    try {
        arold = new Bureaucrat("Arold", 1);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-" << std::endl;

    Form *form1 = NULL;
    Form *form2 = NULL;
    Form *form3 = NULL;
    Form *form4 = NULL;

    try {
        form1 = clotilde.makeForm("shrubbery creation request", \
        "Levallois-Perret");
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-" << std::endl;

    try {
        form2 = clotilde.makeForm("robotomy request", "Bender");
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-" << std::endl;

    try {
        form3 = clotilde.makeForm("presidential pardon request", "Patrick");
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-" << std::endl;

    try {
        form4 = clotilde.makeForm("null", "null");
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-" << std::endl;

    delete form1;
    delete form2;
    delete form3;
    delete form4;
    delete arold;

    return (0);
}
