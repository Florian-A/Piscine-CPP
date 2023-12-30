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

#include <iostream>
#include <string>

int main(void) {
    std::string     msg = "HI THIS IS BRAIN";
    std::string*    msgPnt = &msg;
    std::string&    msgRef = msg;

    std::cout << &msg << std::endl;
    std::cout << msgPnt << std::endl;
    std::cout << &msgRef << std::endl;

    std::cout << msg << std::endl;
    std::cout << *msgPnt << std::endl;
    std::cout << msgRef << std::endl;
    exit(EXIT_SUCCESS);
}
