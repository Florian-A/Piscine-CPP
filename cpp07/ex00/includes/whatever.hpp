#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                        :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void swap(T &a, T &b) { //NOLINT
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T min(const T &a, const T &b) {
    return (a < b ? a : b);
}

template <typename T>
T max(const T &a, const T &b) {  //NOLINT
    return (a > b ? a : b);
}
