/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp" //NOLINT

// Constructors
Form::Form(void) : _name("null"), _signed(0), _signGrade(1), _execGrade(1) {
    std::cout << "Form default constructor called" << std::endl;
    return;
}

Form::Form(std::string const name, int const signGrade, int const execGrade) : \
_name(name), _signGrade(signGrade), _execGrade(execGrade) {
    std::cout << "Form constructor called" << std::endl;
    if (signGrade < 1) {
        throw Form::GradeTooHighException();
    } else if (signGrade > 150) {
        throw Form::GradeTooLowException();
    } else if (execGrade < 1) {
        throw Form::GradeTooHighException();
    } else if (execGrade > 150) {
        throw Form::GradeTooLowException();
    } else {
        this->_signed = 0;
    }
    return;
}

// Destructor
Form::~Form(void) {
    std::cout << "Form destructor called" << std::endl;
    return;
}

// Copy constructor
Form::Form(const Form &src) : _name(src._name), _signed(src._signed), \
_signGrade(src._signGrade), _execGrade(src._execGrade)  {
    std::cout << "Form copy constructor called" << std::endl;
    *this = src;
    return;
}

// Assignation operator
Form &Form::operator=(const Form &rhs) {
    std::cout << "Form assignation operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_signed = rhs._signed;
    return (*this);
}

// Accessors
std::string Form::getName(void) const {
    return (this->_name);
}

int Form::isSigned(void) const {
    return (this->_signed);
}
void Form::setSigned(void) {
    this->_signed = 1;
}
int Form::getSignGrade(void) const {
    return (this->_signGrade);
}
int Form::getExecGrade(void) const {
    return (this->_execGrade);
}

// Methods
void Form::beSigned(const Bureaucrat &br) {
    if (br.getGrade() <= this->_signGrade) {
        this->_signed = 1;
    } else {
        throw Form::GradeTooLowException();
    }
}

void Form::signForm(const Bureaucrat &br) {
    if (this->_signed == 1) {
        std::cout << br.getName() << " signed " << this->_name << std::endl;
    } else {
        std::cout << br.getName() << " couldn't sign " << this->_name << \
        " because he's got too low grade" << std::endl;
    }
}

// Overload of the output operator
std::ostream &operator<<(std::ostream &ost, const Form &src) {
    ost << src.getName() << " : " << "signed grade " << \
    src.getSignGrade() << ", " << "execution grade " << \
    src.getExecGrade() << "";
    return (ost);
}
