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

#include <vector>

class Span {
 private:
    std::vector<int>    _tab;
    unsigned int        _N;

 public:
    Span(unsigned int N); //NOLINT
    Span(const Span &src);
    ~Span(void);

    Span &operator=(const Span &src);

    void addNumber(unsigned int n);
    void addNumber(std::vector<int> tab);
    int shortestSpan(void);
    int longestSpan(void);

    class SpanIsFull : public std::exception {
     public:
        virtual const char *what() const throw() {
            return ("Span: Out of space in vector");
        }
    };
};
