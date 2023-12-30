#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                            :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
 public:
    MutantStack<T>(void);
    MutantStack<T>(const MutantStack<T> &src);
    ~MutantStack<T>(void);

    MutantStack<T> &operator=(const MutantStack<T> &src);

    typedef typename std::stack<int>::container_type::iterator iterator;
    iterator begin(void);
    iterator end(void);
};

#include "./MutantStack.tpp"
