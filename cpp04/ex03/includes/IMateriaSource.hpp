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

class IMateriaSource {
 public:
    virtual ~IMateriaSource(void) {}
    virtual void learnMateria(AMateria *materia) = 0;
    virtual AMateria *createMateria(std::string const &type) = 0;
};
