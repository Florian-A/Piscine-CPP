#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#include "./Bureaucrat.hpp"

class Bureaucrat;

class Form {
 private:
    const std::string _name;
    int _signed;
    const int _signGrade;
    const int _execGrade;

 public:
    // Constructors and destructors
    Form(void); //NOLINT
    Form(std::string const name, int const signGrade, int const execGrade); //NOLINT
    virtual ~Form(void);

    // Copy constructor and assignation operator overload
    Form(const Form &src);
    Form &operator=(const Form &rhs);

      class GradeTooHighException : public std::exception {
       public:
            virtual const char *what() const throw() {
               return ("Grade is too high");
         }
      };
      class GradeTooLowException : public std::exception {
       public:
            virtual const char *what() const throw() {
               return ("Grade is too low");
         }
      };
      class NameTooShortException : public std::exception {
       public:
            virtual const char *what() const throw() {
               return ("Name is too short");
         }
      };
      class FormNotSignedException : public std::exception {
       public:
            virtual const char *what() const throw() {
               return ("Form is not signed");
         }
      };

    // Accessors
    std::string getName(void) const;
    int isSigned(void) const;
    void setSigned(void);
    int getSignGrade(void) const;
    int getExecGrade(void) const;

    // Methods
    void beSigned(const Bureaucrat &br);
    void signForm(const Bureaucrat &br);
    virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream& ost, const Form &src);
