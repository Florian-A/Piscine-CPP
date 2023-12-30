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
#include <sstream>
#include "./main.hpp"

class Cast {
 private:
    // Attributes
    int _type;
    double _dValue;
    std::string _inputString;

 public:
    // Constructors and destructors
    Cast(void); //NOLINT
    Cast(std::string const arg1); //NOLINT
    ~Cast(void);

    // Copy constructor and assignation operator overload
    Cast(const Cast &src);
    Cast &operator=(const Cast &rhs);

    void detect(void);
    void print(void);
};
