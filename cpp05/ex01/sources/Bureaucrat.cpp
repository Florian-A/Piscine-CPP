/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp" //NOLINT

// Constructors
Bureaucrat::Bureaucrat(void) : _name("null"), _grade(150) {
    std::cout << "Bureaucrat default constructor called" << std::endl;
    return;
}
Bureaucrat::Bureaucrat(std::string const name, int const grade) : _name(name) {
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException();
    } else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException();
    } else if (name.length() < 1) {
        throw Bureaucrat::NameTooShortException();
    } else {
        this->_grade = grade;
    }
    return;
}

// Destructor
Bureaucrat::~Bureaucrat(void) {
    std::cout << "Bureaucrat destructor called" << std::endl;
    return;
}

// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat &src) {
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = src;
    return;
}

// Assignation operator
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
    std::cout << "Bureaucrat assignation operator called" << std::endl;
    if (this == &rhs)
        return (*this);
    this->_grade = rhs._grade;
    return (*this);
}

// Accessors
std::string Bureaucrat::getName(void) const {
    return (this->_name);
}
int Bureaucrat::getGrade(void) const {
    return (this->_grade);
}

// Mutators
void Bureaucrat::incrementGrade(void) {
    if (this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}
void Bureaucrat::decrementGrade(void) {
    if (this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

void Bureaucrat::signForm(Form fo) {
    fo.beSigned(*this);
    if (fo.isSigned() == 1) {
        std::cout << this->_name + " signed " +fo.getName()  << std::endl;
    } else {
        std::cout << this->_name + " couldn’t sign " +fo.getName() + \
        "because" + "grade is too low" << std::endl;
    }
}

// Overload of the output operator
std::ostream &operator<<(std::ostream& ost, const Bureaucrat &src) {
    ost << src.getName() << ", bureaucrat grade " << src.getGrade();
    return (ost);
}
