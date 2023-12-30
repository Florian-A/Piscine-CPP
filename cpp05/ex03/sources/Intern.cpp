/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp" //NOLINT
#include "../includes/PresidentialPardonForm.hpp" //NOLINT
#include "../includes/RobotomyRequestForm.hpp" //NOLINT
#include "../includes/ShrubberyCreationForm.hpp" //NOLINT
#include "../includes/Intern.hpp" //NOLINT

// Constructors
Intern::Intern(void) {
    std::cout << "Intern default constructor called" << std::endl;
    return;
}

// Destructor
Intern::~Intern(void) {
    std::cout << "Intern destructor called" << std::endl;
    return;
}

// Assignation operator
Intern &Intern::operator=(const Intern &rhs) {
    std::cout << "Intern assignation operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_formName = rhs._formName;
    this->_target = rhs._target;
    return (*this);
}

Form *Intern::makeForm(std::string const &formName, \
std::string const &targetName) {
    const std::string formsName[3] = \
    {"shrubbery creation request", "robotomy request", \
    "presidential pardon request"};
    int n = -1;
    for (int i = 0; i < 3; i++) {
        if (formName == formsName[i]) {
            n = i;
            break;
        }
    }

    switch (n) {
        case 0:
            std::cout << "Intern create ShrubberyCreationForm" << std::endl;
            return new ShrubberyCreationForm(targetName);
        case 1:
            std::cout << "Intern create RobotomyRequestForm" << std::endl;
            return new RobotomyRequestForm(targetName);
        case 2:
            std::cout << "Intern create PresidentialPardonForm" \
            << std::endl;
            return new PresidentialPardonForm(targetName);
        default:
            throw Form::FormNotFound();
    }

    return (0);
}
