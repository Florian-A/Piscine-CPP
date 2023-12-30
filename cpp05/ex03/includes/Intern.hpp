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
#include "../includes/Form.hpp" //NOLINT

class Intern {
 private:
    std::string _formName;
    std::string _target;

 public:
    // Constructors and destructors
    Intern(void); //NOLINT
    virtual ~Intern(void);

    // Copy constructor and assignation operator overload
    Intern(const Intern &src);
    Intern &operator=(const Intern &rhs);

    Form *makeForm(std::string const &formName, \
    std::string const &targetName);
};
