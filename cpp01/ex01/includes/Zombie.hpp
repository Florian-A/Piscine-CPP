#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Zombie {
 private:
    std::string _name;

 public:
      Zombie(const std::string &name); //NOLINT
      Zombie(void);
      void announce(void) const;
      void setName(const std::string &name);
      ~Zombie(void);
};
Zombie *zombieHorde(int N, std::string name);
