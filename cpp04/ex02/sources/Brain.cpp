/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

// Constructors
Brain::Brain(void) {
    std::cout << "Brain default constructor called" << std::endl;
    return;
}

// Destructor
Brain::~Brain(void) {
    std::cout << "Brain destructor called" << std::endl;
    return;
}

// Copy constructor
Brain::Brain(const Brain &src) {
    *this = src;
    return;
}

// Assignation operator
Brain &Brain::operator=(const Brain &rhs) {
    if (this == &rhs)
        return (*this);
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
    return (*this);
}

// Setters and getters
std::string Brain::getIdea(int i) const {
    if (i < 0 || i > 99)
        return ("");
    return (this->_ideas[i]);
}
void Brain::setIdea(int i, std::string idea) {
    if (i < 0 || i > 99)
        return;
    this->_ideas[i] = idea;
}
