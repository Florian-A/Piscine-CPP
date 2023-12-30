/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp" //NOLINT

// Constructors
PresidentialPardonForm::PresidentialPardonForm(void) :
Form("PresidentialPardonForm", 25, 5), _target("null") {
    std::cout << "PresidentialPardonForm default constructor called" << \
    std::endl;
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) :
Form("PresidentialPardonForm", 25, 5), _target("null") {
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
    this->_target = target;
    return;
}

// Destructor
PresidentialPardonForm::~PresidentialPardonForm(void) {
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
    return;
}

// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm \
&src) : Form("PresidentialPardonForm", 25, 5), _target(src._target)  {
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    return;
}

// Assignation operator
PresidentialPardonForm &PresidentialPardonForm::
operator=(const PresidentialPardonForm &rhs) {
    std::cout << "PresidentialPardonForm assignation operator called"\
     << std::endl;
    if (this == &rhs)
        return (*this);
    this->_target = rhs._target;
    if (rhs.isSigned() == 1)
        this->setSigned();
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    std::cout << executor.getName() << " executed " << this->getName() \
    << std::endl;
    if (!this->isSigned()) {
        throw Form::FormNotSignedException();
    }
    if (executor.getGrade() > this->getExecGrade()) {
        throw Form::GradeTooLowException();
    }
    std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." \
    << std::endl;
}
