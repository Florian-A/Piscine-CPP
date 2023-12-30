/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp" //NOLINT

// Constructors
RobotomyRequestForm::RobotomyRequestForm(void) :
Form("RobotomyRequestForm", 72, 45), _target("null") {
    std::cout << "RobotomyRequestForm default constructor called" << \
    std::endl;
    return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) :
Form("RobotomyRequestForm", 72, 45), _target("null") {
    std::cout << "RobotomyRequestForm constructor called" << std::endl;
    this->_target = target;
    return;
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm(void) {
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
    return;
}

// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) \
: Form("RobotomyRequestForm", 72, 45), _target(src._target) {
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    return;
}

// Assignation operator
RobotomyRequestForm &RobotomyRequestForm::
operator=(const RobotomyRequestForm &rhs) {
    std::cout << "RobotomyRequestForm assignation operator called"\
     << std::endl;
    if (this == &rhs)
        return (*this);
    this->_target = rhs._target;
    if (rhs.isSigned() == 1)
        this->setSigned();
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    std::cout << executor.getName() << " executed " << this->getName() \
    << std::endl;
    if (!this->isSigned()) {
        throw Form::FormNotSignedException();
    }
    if (executor.getGrade() > this->getExecGrade()) {
        throw Form::GradeTooLowException();
    }
    std::cout << "*BIZZZ*" << std::endl;
    std::srand(std::time(0));
    if (std::rand() % 2 == 0) {
        std::cout << "Target " << this->_target
        << " has been succesfully robotomized !" << std::endl;
    } else {
        std::cout << "Target " << this->_target
        << " couldn't be robotomized..." << std::endl;
    }
}
