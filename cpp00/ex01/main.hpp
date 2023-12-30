#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>

#define TRUE 1
#define FALSE 0
#define LST_CMD "Authorized commands : \"ADD\", \"SEARCH\", \"EXIT\"."
#define E_CMD "Invalid command!"
#define S_ADD "Contact successfully added!"
#define E_ADD "Failed to add contact\nContact information cannot have only spaces, empty, or non-printable characters from the ASCII tables." //NOLINT
#define E_SEARCH "Contact not found!"


#include "./Contact.hpp"
#include "./PhoneBook.hpp"
#include "./tool.hpp"
