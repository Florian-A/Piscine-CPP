/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

// Constructors
MateriaSource::MateriaSource(void) {
    std::cout << "MateriaSource default constructor called" << std::endl;
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
    return;
}
MateriaSource::MateriaSource(const MateriaSource &src) {
    std::cout << "MateriaSource copy constructor called" << std::endl;
    *this = src;
    return;
}

// Destructor
MateriaSource::~MateriaSource(void) {
    std::cout << "MateriaSource destructor called" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (this->_materia[i] != NULL)
            delete this->_materia[i];
    }
}

// Copy constructor and operator= overload
MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
    std::cout << "MateriaSource operator= called" << std::endl;
    if (this != &rhs) {
        for (int i = 0; i < 4; i++) {
            if (this->_materia[i] != NULL)
                delete this->_materia[i];
            this->_materia[i] = rhs._materia[i]->clone();
        }
    }
    return *this;
}

// Methods
void MateriaSource::learnMateria(AMateria *materia) {
    std::cout << "MateriaSource learnMateria called" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (this->_materia[i] == NULL) {
            this->_materia[i] = materia;
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const &type) {
    std::cout << "MateriaSource createMateria called" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (this->_materia[i] != NULL && \
        this->_materia[i]->getType() == type) {
            return (this->_materia[i]->clone());
        }
    }
    return (0);
}
