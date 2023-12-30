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
Array<T>::Array(void) {
    this->_data = new T[0];
    this->_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
    this->_data = new T[n];
    this->_size = n;
}

template <typename T>
Array<T>::Array(const Array &src) {
    *this = src;
    return;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &rhs) {
    if (this == &rhs)
        return (*this);

    this->_size = rhs.size();
    this->_data = new T[rhs.size()];

    for (int i = 0; i < rhs.size(); i++)
        this->_data[i] = rhs._data[i];

    return (*this);
}

template <typename T>
T & ::Array<T>::operator[](int index) {
    if (index < 0 || index >= this->_size)
        throw Array::IndexOutOfRange();
    return (this->_data[index]);
}

template <typename T>
Array<T>::~Array(void) {
    delete [] this->_data;
}

template <typename T>
int Array<T>::size(void) const {
    return (this->_size);
}