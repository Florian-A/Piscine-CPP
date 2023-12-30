#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "./main.hpp"

class Brain {
 private:
    std::string _ideas[100];

 public:
    // Constructors and destructors
    Brain(void); //NOLINT
    Brain(std::string const name); //NOLINT
    virtual ~Brain(void);

    // Copy constructor and assignation operator overload
    Brain(const Brain &src);
    Brain &operator=(const Brain &rhs);

    // Setters and getters
    std::string getIdea(int i) const;
    void setIdea(int i, std::string idea);
};
