#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <list>
#include <deque>

class PmergeMe {
 private:
    std::list<int> nbList;
    std::deque<int> nbDeque;

 public:
    PmergeMe();
    ~PmergeMe();

    void setNb(const std::string &userInput);
    unsigned long getListSize() const; //NOLINT
    unsigned long getDequeSize() const; //NOLINT
    void showList() const;
    void showDeque() const;
    void sortList();
    void sortDeque();

    std::list<int>::iterator next(std::list<int>::iterator it);
    std::list<int>::iterator prev(std::list<int>::iterator it);
    void reverseList(std::list<int> &lst); //NOLINT

    std::deque<int>::iterator nextDeque(std::deque<int>::iterator it);
    std::deque<int>::iterator prevDeque(std::deque<int>::iterator it);
    void reverseDeque(std::deque<int> &deq); //NOLINT
};
