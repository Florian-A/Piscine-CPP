#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/04/19 11:42:46 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

template <typename T>
void easyfind(T &a, int &b) {
    typename T::iterator i = std::find(a.begin(), a.end(), b);
    if (i == a.end())
        throw std::exception();
    std::cout << "Found " << b << " at index " << std::distance(a.begin(), i) << std::endl;
}