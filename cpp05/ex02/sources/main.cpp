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
    // Instantiation of a Bureaucrat
    Bureaucrat *arold = NULL;
    try {
        arold = new Bureaucrat("Arold", 146);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    // Test of the mutators
    try {
        if (arold != NULL) {
            arold->incrementGrade();
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << *arold << std::endl;

    try {
        if (arold != NULL) {
            arold->decrementGrade();
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << *arold << std::endl;

    Form *form1 = NULL;
    Form *form2 = NULL;
    Form *form3 = NULL;

    try {
        form1 = new ShrubberyCreationForm("Levallois-Perret");
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        form2 = new RobotomyRequestForm("Bender");
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        form3 = new PresidentialPardonForm("Patrick");
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << *form1 << std::endl;
    std::cout << *form2 << std::endl;
    std::cout << "-" << std::endl;

    try {
        if (form1 != NULL && arold != NULL) {
            form1->beSigned(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        if (form1 != NULL && arold != NULL) {
            form1->signForm(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        if (form1 != NULL && arold != NULL) {
            form1->execute(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-" << std::endl;

    try {
        if (arold != NULL) {
            for (int i = 0; i < 80; i++) {
                arold->incrementGrade();
            }
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        if (form1 != NULL && arold != NULL) {
            form1->beSigned(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        if (form1 != NULL && arold != NULL) {
            form1->signForm(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        if (form1 != NULL && arold != NULL) {
            form1->execute(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-" << std::endl;

    try {
        if (form2 != NULL && arold != NULL) {
            form2->beSigned(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        if (form2 != NULL && arold != NULL) {
            form2->signForm(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        if (form2 != NULL && arold != NULL) {
            form2->execute(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-" << std::endl;

    try {
        if (arold != NULL) {
            for (int i = 0; i < 30; i++) {
                arold->incrementGrade();
            }
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        if (form2 != NULL && arold != NULL) {
            form2->beSigned(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        if (form2 != NULL && arold != NULL) {
            form2->signForm(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        if (form2 != NULL && arold != NULL) {
            form2->execute(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "-" << std::endl;

    try {
        if (form3 != NULL && arold != NULL) {
            form3->beSigned(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        if (form3 != NULL && arold != NULL) {
            form3->signForm(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        if (form3 != NULL && arold != NULL) {
            form3->execute(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        if (arold != NULL) {
            for (int i = 0; i < 35; i++) {
                arold->incrementGrade();
            }
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        if (form3 != NULL && arold != NULL) {
            form3->beSigned(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        if (form3 != NULL && arold != NULL) {
            form3->signForm(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        if (form3 != NULL && arold != NULL) {
            form3->execute(*arold);
        }
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    delete arold;
    delete form1;
    delete form2;
    delete form3;
    return (0);
}
