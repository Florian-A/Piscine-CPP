/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

// Constructors
Cast::Cast(void) :  _type(0), _inputString("") {
    return;
}

Cast::Cast(std::string const inputScalar) \
: _type(0), _inputString(inputScalar) {
    return;
}

// Destructor
Cast::~Cast(void) {
    return;
}

// Copy constructor
Cast::Cast(const Cast &src) {
    *this = src;
    return;
}

// Assignation operator
Cast &Cast::operator=(const Cast &rhs) {
    if (this == &rhs)
        return (*this);
    this->_type = rhs._type;
    this->_inputString = rhs._inputString;
    return (*this);
}

// Detects the data type of the input
void Cast::detect(void) {
    int len = static_cast<int>(this->_inputString.length());
    int nbSign = 0;
    int nbChar = 0;
    int nbDot = 0;
    int nbF = 0;

    // Count the number of signs, dots, characters and f
    for (int i = 0; i < len; ++i) {
        if (this->_inputString[i] == '-' || this->_inputString[i] == '+')
            ++nbSign;
        else if (_inputString[i] == '.')
            ++nbDot;
        else if (isascii(static_cast<unsigned char>(this->_inputString[i])) \
        && !isdigit(static_cast<unsigned char>(this->_inputString[i])))
            ++nbChar;
    }
    if (this->_inputString[len - 1] == 'f' \
    || this->_inputString[len - 1] == 'F')
        nbF++;

    if (nbChar == 1 && len == 1)
        this->_dValue = static_cast<double>(this->_inputString[0]);
    else
        this->_dValue = atof(this->_inputString.c_str());

    // Check for NaN and Inf values
    if (std::isnan(this->_dValue))
        this->_type = -1;   // NaN
    else if (std::isinf(this->_dValue))
        this->_type = -2;   // Inf

    // Check for invalid input values
    if (nbChar > 0 && len > 1 && nbF == 0)
        return;
    if (nbSign > 1 || nbDot > 1 || nbF > 1 || nbChar > 1)
        return;

    // Determine the data type based on the input value
    if (nbDot == 0 && ((this->_dValue < CHAR_MAX && this->_dValue > CHAR_MIN) \
    && (nbChar == 1 && len == 1)))
        this->_type = 1;    // Char
    else if (nbDot == 0 && nbF == 0 && this->_dValue < INT_MAX \
    && this->_dValue > INT_MIN)
        this->_type = 2;    // Int
    else if ((nbF == 1 && (this->_dValue > (-1.0f * FLT_MAX) \
    && this->_dValue < FLT_MAX)))
        this->_type = 3;    // Float
    else if (nbF == 0 && this->_dValue > (-1 * DBL_MAX) \
    && this->_dValue < DBL_MAX)
        this->_type = 4;    // Double
    return;
}

// Display _dValue in different types.
void Cast::print(void) {
    if (this->_type == -1) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nan" << "f" << std::endl;
        std::cout << "double: nan" << std::endl;
    } else if (this->_type == -2) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << this->_dValue << "f" << std::endl;
        std::cout << "double: " << this->_dValue << std::endl;
    } else if (this->_type == 1 || this->_type == 2 || this->_type == 3 \
    || this->_type == 4) {
        if (this->_dValue < CHAR_MAX && this->_dValue >= 32)
            std::cout << "char: '" << static_cast<char>(this->_dValue) \
            << "'" << std::endl;
        else
            std::cout << "char: non displayable" << std::endl;
        if (this->_dValue < INT_MAX && this->_dValue > INT_MIN)
            std::cout << "int: " << this->_dValue << std::endl;
        else
            std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << static_cast<float>(this->_dValue) << "f" \
        << std::endl;
        std::cout << "double: " << static_cast<double>(this->_dValue) \
        << std::endl;
    } else {
        std::cout << "error: wrong input !" << std::endl;
    }
}
