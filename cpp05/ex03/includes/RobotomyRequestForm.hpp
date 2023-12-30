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
#include <cstdlib>
#include <ctime>
#include "./Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form {
 private:
    std::string _target;

 public:
    RobotomyRequestForm(void); //NOLINT
    RobotomyRequestForm(std::string const target); //NOLINT
    ~RobotomyRequestForm(void);

    // Copy constructor and assignation operator overload
    RobotomyRequestForm(const RobotomyRequestForm &src);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

    void execute(Bureaucrat const &executor) const;
};
