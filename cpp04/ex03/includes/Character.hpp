#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "./main.hpp"
#include "./AMateria.hpp"

class Character : public ICharacter {
 private:
      std::string _name;
      AMateria *_materia[4];

 public:
      // Constructors and destructors
      Character(void);
      Character(std::string const &name); //NOLINT
      ~Character(void);

      // Constructor by copy and operator= overload
      Character(const Character &src);
      Character &operator=(const Character &rhs);

      // Getters and setters
      std::string const &getName(void) const;
      void equip(AMateria *materia);
      void unequip(int idx);
      void use(int idx, ICharacter &target); //NOLINT
};
