/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./main.hpp" //NOLINT

PhoneBook::PhoneBook(void) {
    this->_indexLastAdd = 0;
}

int PhoneBook::addContact(void) {
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    std::cout << "/------------------------------------------\\" << std::endl;
    std::cout << "|              ADD A CONTACT               |" << std::endl;
    std::cout << "\\------------------------------------------/" << std::endl;
    std::cout << "first name: ";
    std::getline(std::cin, firstName);
    firstName = trim(firstName);
    if (firstName == "" || strIsPrint(firstName) == FALSE) {
        return (FALSE);
    }
    std::cout << "last name: ";
    std::getline(std::cin, lastName);
    lastName = trim(lastName);
    if (lastName == "" || strIsPrint(lastName) == FALSE) {
        return (FALSE);
    }
    std::cout << "nickname: ";
    std::getline(std::cin, nickName);
    nickName = trim(nickName);
    if (nickName == "" || strIsPrint(nickName) == FALSE) {
        return (FALSE);
    }
    std::cout << "phone number: ";
    std::getline(std::cin, phoneNumber);
    phoneNumber = trim(phoneNumber);
    if (phoneNumber == "" || strIsPrint(phoneNumber) == FALSE) {
        return (FALSE);
    }
    std::cout << "darkest secret: ";
    std::getline(std::cin, darkestSecret);
    darkestSecret = trim(darkestSecret);
    if (darkestSecret == "" || strIsPrint(darkestSecret) == FALSE) {
        return (FALSE);
    }
    int index = _indexLastAdd % 8;
    _contactArr[index].create(index+1, firstName, lastName, \
    nickName, phoneNumber, darkestSecret);
    this->_indexLastAdd++;
    return (TRUE);
    }

int PhoneBook::showContactArr(void) const {
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string strIndex;
    int index;

    std::cout << "/------------------------------------------\\" << std::endl;
    std::cout << "|                                          |" << std::endl;
    std::cout << "|              CONTACT LIST                |" << std::endl;
    std::cout << "|                                          |" << std::endl;
    std::cout << "|---------|----------|----------|----------|" << std::endl;
    std::cout << "|  index  |first name| last name| nickname |" << std::endl;
    std::cout << "|---------|----------|----------|----------|" << std::endl;
    if (this->_contactArr[0].getFirstName() == "") {
        std::cout << "|                                          |" \
        << std::endl;
        std::cout << "|                 empty !                  |" \
        << std::endl;
        std::cout << "|                                          |" \
        << std::endl;
        std::cout << "\\------------------------------------------/" \
        << std::endl;
    } else {
        for (int i = 0; i <= 7; ++i) {
            if (this->_contactArr[i].getIndex() > 0) {
                firstName = this->_contactArr[i].getFirstName();
                if (firstName.length() > 10) {
                    firstName.resize(9);
                    firstName.append(".");
                }
                lastName = this->_contactArr[i].getLastName();
                if (lastName.length() > 10) {
                    lastName.resize(9);
                    lastName.append(".");
                }
                nickName = this->_contactArr[i].getNickName();
                if (nickName.length() > 10) {
                    nickName.resize(9);
                    nickName.append(".");
                }
                std::cout << "|";
                std::cout << std::setw(9) << this->_contactArr[i].getIndex();
                std::cout << "|";
                std::cout << std::setw(10) << firstName;
                std::cout << "|";
                std::cout << std::setw(10) << lastName;
                std::cout << "|";
                std::cout << std::setw(10) << nickName;
                std::cout << "|" << std::endl;
            }
        }
        std::cout << "\\------------------------------------------/" \
        << std::endl << std::endl;
        std::cout << "Please enter the index you want to view : ";
        if (!std::getline(std::cin, strIndex))
            return (FALSE);
        std::cout << std::endl;
        if (strIsDigit(strIndex) != FALSE && strIndex.length() < 10) {
            index = std::atoi(strIndex.c_str());
            if (this->showContact(index -1) == FALSE) {
                return (FALSE);
            }
            return (TRUE);
        } else {
            return (FALSE);
        }
    }
    return (TRUE);
}

int PhoneBook::showContact(const int &index) const {
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;

    if (index < 0 || index > 7)
        return (FALSE);
    if (this->_contactArr[index].getFirstName() == "") {
        return (FALSE);
    }
    firstName = this->_contactArr[index].getFirstName();
    if (firstName.length() > 29) {
        firstName.resize(28);
        firstName.append(".");
    }
    lastName = this->_contactArr[index].getLastName();
    if (lastName.length() > 30) {
        lastName.resize(29);
        lastName.append(".");
    }
    nickName = this->_contactArr[index].getNickName();
    if (nickName.length() > 30) {
        nickName.resize(29);
        nickName.append(".");
    }
    phoneNumber = this->_contactArr[index].getPhoneNumber();
    if (phoneNumber.length() > 27) {
        phoneNumber.resize(26);
        phoneNumber.append(".");
    }
    darkestSecret = this->_contactArr[index].getDarkestSecret();
    if (darkestSecret.length() > 25) {
        darkestSecret.resize(24);
        darkestSecret.append(".");
    }
    std::cout << "/------------------------------------------\\" << std::endl;
    std::cout << "|             CONTACT INDEX :" << index +1 \
    << "             |" << std::endl;
    std::cout << "|------------------------------------------|" << std::endl;
    std::cout << "| first name: " << std::left << \
    std::setw(29) << firstName << "|" << std::endl;
    std::cout << "| last name: " << std::left << \
    std::setw(30) << lastName << "|" << std::endl;
    std::cout << "| nick name: " << std::left << \
    std::setw(30) << nickName << "|" << std::endl;
    std::cout << "| phone number: "<< std::left << \
    std::setw(27) << phoneNumber << "|" << std::endl;
    std::cout << "| darkest secret: " << std::left << \
    std::setw(25) << darkestSecret << "|" << std::endl;
    std::cout << "\\------------------------------------------/" \
    << std::endl << std::endl;
    return (TRUE);
}

PhoneBook::~PhoneBook(void) {}
