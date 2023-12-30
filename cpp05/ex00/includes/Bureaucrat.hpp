#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "./main.hpp"

class Bureaucrat {
 private:
    const std::string _name;
    int _grade;

 public:
    // Constructors and destructors
    Bureaucrat(void); //NOLINT
    Bureaucrat(std::string const name, int const grade); //NOLINT
    ~Bureaucrat(void);

    // Copy constructor and assignation operator overload
    Bureaucrat(const Bureaucrat &src);
    Bureaucrat &operator=(const Bureaucrat &rhs);

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

    // Accessors
    std::string getName(void) const;
    int getGrade(void) const;

    // Mutators
    void incrementGrade(void);
    void decrementGrade(void);
};

std::ostream &operator<<(std::ostream& ost, const Bureaucrat &src);
