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

#define DEBUG_MSG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" //NOLINT
#define INFO_MSG "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" //NOLINT
#define WARNING_MSG "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." //NOLINT
#define ERROR_MSG "This is unacceptable ! I want to speak to the manager now."
#define UNKNOWN_MSG "[ Unknown severity level! ]"

class Harl {
 private:
     void debug(void);
     void info(void);
     void warning(void);
     void error(void);
     void unknown(void);

 public:
     Harl(void);
     void complain(std::string level);
     ~Harl(void);
};

typedef struct s_level {
    std::string debugString;
    int         debugCase;
} t_level;
