#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                           :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
class Array {
 private:
    T *_data;
    int _size;

 public:
    Array<T>(void);
    Array<T>(unsigned int n);
    ~Array(void);

    Array<T>(const Array<T> &src);
    Array<T> &operator=(const Array<T> &rhs);

    int size(void) const;
    T &operator[](int index);

    class IndexOutOfRange : public std::exception {
     public:
        virtual const char *what() const throw() {
            return ("Array: Index out of range !");
        }
    };
};

#include "Array.tpp"
