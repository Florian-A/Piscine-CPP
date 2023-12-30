/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <fstream>
#include <iostream>
#include "../includes/main.hpp" //NOLINT

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

void PmergeMe::setNb(const std::string &userInput) {
    std::stringstream ss(userInput);
    int number;
    while (ss >> number) {
        if (number < 0) {
            throw std::invalid_argument("Error");
        }
        nbList.push_back(number);
        nbDeque.push_back(number);
    }
}

unsigned long PmergeMe::getListSize() const { //NOLINT
    return nbList.size();
}

unsigned long PmergeMe::getDequeSize() const { //NOLINT
    return nbDeque.size();
}

void PmergeMe::showList() const {
    std::list<int>::const_iterator it;
    for (it = nbList.begin(); it != nbList.end(); ++it) {
        std::cout << *it << " ";
    }
}

void PmergeMe::showDeque() const {
    std::deque<int>::const_iterator it;
    for (it = nbDeque.begin(); it != nbDeque.end(); ++it) {
        std::cout << *it << " ";
    }
}

void PmergeMe::sortList() {
    if (nbList.size() < 2) {
        return;
    }

    std::list<int>::iterator it = nbList.begin();
    std::list<int>::iterator it2 = it;
    ++it2;

    if (*it2 < *it) {
        nbList.reverse();
        it = nbList.begin();
        it2 = it;
        ++it2;
    }

    std::list<int>::iterator it3 = it2;
    ++it3;
    while (it3 != nbList.end() && *it3 >= *it2) {
        ++it2;
        ++it3;
    }

    if (it3 != nbList.end()) {
        reverseList(nbList);
    }

    for (std::list<int>::iterator it = next(nbList.begin()); \
    it != nbList.end(); ++it) {
        int current = *it;
        std::list<int>::iterator it2 = it;

        while (it2 != nbList.begin() && *prev(it2) > current) {
            *it2 = *prev(it2);
            --it2;
        }
        *it2 = current;
    }
}

void PmergeMe::reverseList(std::list<int> &lst) {
    std::list<int> reversedList;
    for (std::list<int>::reverse_iterator rit = lst.rbegin(); \
    rit != lst.rend(); ++rit) {
        reversedList.push_back(*rit);
    }
    lst = reversedList;
}

std::list<int>::iterator PmergeMe::next(std::list<int>::iterator it) {
    std::list<int>::iterator temp = it;
    return ++temp;
}

std::list<int>::iterator PmergeMe::prev(std::list<int>::iterator it) {
    std::list<int>::iterator temp = it;
    return --temp;
}


void PmergeMe::sortDeque() {
    if (nbDeque.size() < 2) {
        return;
    }

    std::deque<int>::iterator it = nbDeque.begin();
    std::deque<int>::iterator it2 = it;
    ++it2;

    if (*it2 < *it) {
        reverseDeque(nbDeque);
        it = nbDeque.begin();
        it2 = it;
        ++it2;
    }

    std::deque<int>::iterator it3 = it2;
    ++it3;
    while (it3 != nbDeque.end() && *it3 >= *it2) {
        ++it2;
        ++it3;
    }

    if (it3 != nbDeque.end()) {
        reverseDeque(nbDeque);
    }

    for (std::deque<int>::iterator it = nextDeque(nbDeque.begin()); \
    it != nbDeque.end(); ++it) {
        int current = *it;
        std::deque<int>::iterator it2 = it;

        while (it2 != nbDeque.begin() && *prevDeque(it2) > current) {
            *it2 = *prevDeque(it2);
            --it2;
        }
        *it2 = current;
    }
}

void PmergeMe::reverseDeque(std::deque<int> &deq) {
    std::deque<int> reversedDeque;
    for (std::deque<int>::reverse_iterator rit = deq.rbegin(); \
    rit != deq.rend(); ++rit) {
        reversedDeque.push_back(*rit);
    }
    deq = reversedDeque;
}

std::deque<int>::iterator PmergeMe::nextDeque(std::deque<int>::iterator it) {
    std::deque<int>::iterator temp = it;
    return ++temp;
}

std::deque<int>::iterator PmergeMe::prevDeque(std::deque<int>::iterator it) {
    std::deque<int>::iterator temp = it;
    return --temp;
}

