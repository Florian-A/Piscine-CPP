#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/05/02 03:17:54 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _SERIALIZATION_H_
# define _SERIALIZATION_H_

# include <stdint.h>

uintptr_t   serialize(Data *ptr);
Data*       deserialize(uintptr_t raw);

#endif
