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
MutantStack<T>::MutantStack(void) {
    return;
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &rhs) {
    *this = rhs;
    return;
}

template <typename T>
MutantStack<T>::~MutantStack(void) {
    return;
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack<T> &rhs) {
    if (this == &rhs)
            return (*this);
    std::stack<T>::operator=(rhs);
    return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void) {
    return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void) {
    return std::stack<T>::c.end();
}
