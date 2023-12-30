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
#include <fstream>
#include <string>
#include "./Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form {
 private:
    std::string _target;

 public:
    PresidentialPardonForm(void); //NOLINT
    PresidentialPardonForm(std::string const target); //NOLINT
    ~PresidentialPardonForm(void);

    // Copy constructor and assignation operator overload
    PresidentialPardonForm(const PresidentialPardonForm &src);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

    void execute(Bureaucrat const &executor) const;
};
