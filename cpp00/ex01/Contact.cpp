/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./main.hpp" //NOLINT

Contact::Contact(void) {
        this->_index = 0;
}
void Contact::create(
        const int &index,
        const std::string &firstName,
        const std::string &lastName,
        const std::string &nickName,
        const std::string &phoneNumber,
        const std::string &darkestSecret) {
                this->_index = index;
                this->_firstName = firstName;
                this->_lastName = lastName;
                this->_nickName = nickName;
                this->_phoneNumber = phoneNumber;
                this->_darkestSecret = darkestSecret;
        }
int Contact::getIndex(void) const {
        return (this->_index);
}
std::string Contact::getFirstName(void) const {
        return (this->_firstName);
}
std::string Contact::getLastName(void) const {
        return (this->_lastName);
}
std::string Contact::getNickName(void) const {
        return (this->_nickName);
}
std::string Contact::getPhoneNumber(void) const {
        return (this->_phoneNumber);
}
std::string Contact::getDarkestSecret(void) const {
        return (this->_darkestSecret);
}
Contact::~Contact(void) {}
