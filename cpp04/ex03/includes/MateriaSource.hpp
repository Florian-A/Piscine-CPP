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

class MateriaSource : public IMateriaSource {
 private:
    AMateria *_materia[4];

 public:
    // Constructors
    MateriaSource(void);
    MateriaSource(MateriaSource const &src);

    // Destructor
    ~MateriaSource(void);

    // Overload operator
    MateriaSource &operator=(MateriaSource const &src);

    // Methods
    void learnMateria(AMateria *materia);
    AMateria *createMateria(std::string const &type);
};
