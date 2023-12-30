/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/main.hpp" //NOLINT

int main() {
    MutantStack<int> mstack1;
    mstack1.push(5);
    mstack1.push(17);

    std::cout << "top" << std::endl;
    std::cout << mstack1.top() << std::endl;
    mstack1.pop();
    std::cout << "size" << std::endl;
    std::cout << mstack1.size() << std::endl;

    mstack1.push(3);
    mstack1.push(5);
    mstack1.push(737);

    mstack1.push(0);

    MutantStack<int>::iterator it = mstack1.begin();
    MutantStack<int>::iterator ite = mstack1.end();
    ++it;
    --it;
    std::cout << "while" << std::endl;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack1);

    MutantStack<int> mstack2;
    mstack2 = mstack1;

    it = mstack2.begin();
    ite = mstack2.end();
    ++it;
    --it;
    std::cout << "while" << std::endl;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    return (0);
}
