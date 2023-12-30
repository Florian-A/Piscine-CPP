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
    Bureaucrat *archibald = NULL;

    // Instantiation of a Bureaucrat
    try {
        archibald = new Bureaucrat("Archibald", 10);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // Test of the mutators
    try {
        if (archibald != NULL) {
            archibald->incrementGrade();
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << *archibald << std::endl;
    try {
        if (archibald != NULL) {
            archibald->decrementGrade();
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << *archibald << std::endl;

    Form *form1 = NULL;
    try {
        form1 = new Form("Mariage", 5, 1);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << *form1 << std::endl;

    try {
        if (form1 != NULL && archibald != NULL) {
            form1->beSigned(*archibald);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        if (form1 != NULL && archibald != NULL) {
            form1->signForm(*archibald);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        if (archibald != NULL) {
            archibald->incrementGrade();
            archibald->incrementGrade();
            archibald->incrementGrade();
            archibald->incrementGrade();
            archibald->incrementGrade();
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        if (form1 != NULL && archibald != NULL) {
            form1->beSigned(*archibald);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        if (form1 != NULL && archibald != NULL) {
            form1->signForm(*archibald);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    delete archibald;
    delete form1;
    return (0);
}
