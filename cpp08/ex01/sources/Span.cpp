/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

Span::Span(unsigned int N) : _N(N) {
    this->_tab.reserve(N);
}

Span::Span(const Span &src) : _N(src._N) {
    *this = src;
}

Span::~Span(void) {}

Span &Span::operator=(const Span &src) {
    _N = src._N;
    _tab = src._tab;
    return *this;
}

void Span::addNumber(std::vector<int> tab) {
    if (this->_tab.size() + tab.size() > this->_N)
        throw Span::SpanIsFull();
    this->_tab.insert(this->_tab.end(), tab.begin(), tab.end());
}

void Span::addNumber(unsigned int n) {
    if (this->_tab.size() == this->_N)
        throw Span::SpanIsFull();
    this->_tab.push_back(n);
}

int Span::shortestSpan(void) {
    std::vector<int>    tabSorted;

    if (this->_tab.size() <= 1)
        throw Span::SpanIsFull();
    tabSorted = this->_tab;
    std::sort(tabSorted.begin(), tabSorted.end());
    return tabSorted[1] -1 - tabSorted[0];
}

int Span::longestSpan(void) {
    std::vector<int>    tabSorted;

    if (this->_tab.size() <= 1)
        throw Span::SpanIsFull();
    tabSorted = this->_tab;
    std::sort(tabSorted.begin(), tabSorted.end());
    return tabSorted[tabSorted.size() - 1] - tabSorted[0];
}
