/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
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
#include <vector>
#include "../includes/main.hpp" //NOLINT

// Constructors
BitcoinExchange::BitcoinExchange(void) {
    this->databaseStream.open("data.csv");
    if (!databaseStream) {
        throw std::runtime_error("Error: can't open data.csv");
    }
    return;
}

// Destructor
BitcoinExchange::~BitcoinExchange(void) {
    this->databaseStream.close();
    return;
}

// Copy constructor
BitcoinExchange::BitcoinExchange(const BitcoinExchange &src) {
    *this = src;
    return;
}

// Assignation operator
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs) {
    if (this == &rhs)
        return (*this);
    return (*this);
}

bool BitcoinExchange::isValidDate(std::string dateStr) const {
    std::istringstream dateSs(dateStr);

    int year, month;
    std::string dayStr;
    char separator1, separator2;
    dateSs >> year >> separator1 >> month >> separator2 >> dayStr;

    if (!isNumber(dayStr)) {
        return false;
    }

    int day = 0;
    std::istringstream(dayStr) >> day;

    if (separator1 != '-' || separator2 != '-') {
        return false;
    }

    if (year < 0 || year > 9999 || month < 1 || \
    month > 12 || day < 1 || day > 31) {
        return false;
    }

    if (month == 2) {
        if (day > 29) {
            return false;
        }
        if (day == 29) {
            return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30) {
            return false;
        }
    }
    return true;
}

bool BitcoinExchange::isValidNumber(std::string numberStr) const {
    bool hasDot = false;
    bool hasDigit = false;
    for (size_t i = 0; i < numberStr.size(); ++i) {
        if (i == 0 && numberStr[i] == '.') {
            return false;
        }
        if (numberStr[i] == '.') {
            if (hasDot) {
                return false;
            }
            hasDot = true;
        } else if (!std::isdigit(numberStr[i])) {
            return false;
        } else {
            hasDigit = true;
        }
    }

    std::istringstream iss(numberStr);
    double number;
    iss >> number >> std::ws;
    if (!iss.eof() || !hasDigit) {
        return false;
    }

    if (number < 0 || number > 1000) {
        return false;
    }
    return true;
}

/*
This function takes in two arguments:
- a searchDate string representing the date to search for in the data.csv file,
- a btcAmount string representing the amount of bitcoin to convert to its corresponding value in USD.
*/
void BitcoinExchange::searchPortfolioValue(std::string searchDate, \
    std::string btcAmout) {
    bool validDate = false;
    bool validNumber = false;

    if (this->isValidDate(searchDate)) {
        validDate = true;
    }

    std::cout << btcAmout << std::endl;
    if (this->isValidNumber(btcAmout)) {
        validNumber = true;
    }

    if (validDate && validNumber) {
        searchDate.erase(searchDate.size() - 1);
        std::vector<std::pair<std::string, double> > lines;
        std::string line;

        std::getline(this->databaseStream, line);
        while (std::getline(this->databaseStream, line)) {
            lines.push_back(std::make_pair(line.substr(0, line.find(',')), \
            atof(line.substr(line.find(',') + 1).c_str())));
        }
        std::sort(lines.begin(), lines.end());
        this->showPortfolioValue(lines, searchDate, btcAmout);

    } else if (!validDate) {
        std::cout << "Error: invalid date" << std::endl;
    } else if (!validNumber) {
        std::cout << "Error: invalid amout of btc" << std::endl;
    }
}

/*
This function takes three arguments:
- a vector of pairs representing lines of data containing dates and their corresponding bitcoin values,
- a searchDate string representing the date to search for in the vector of lines,
- a btcAmount string representing the amount of bitcoin to convert to its corresponding value in USD.
*/
void BitcoinExchange::showPortfolioValue(\
std::vector<std::pair<std::string, double> > lines, std::string searchDate, \
std::string btcAmout) const { //NOLINT
    std::pair<std::string, double> search_pair(searchDate, 0.0);
    std::vector<std::pair<std::string, double> >::iterator it = \
    std::lower_bound(lines.begin(), lines.end(), search_pair);

    if (it != lines.end() && it->first == searchDate) {
    std::cout << it->first << " => " << btcAmout << " = " << it->second * \
    strtod(btcAmout.c_str(), 0) << std::endl;
    } else if (it == lines.begin()) {
        std::cout << it->first << " => " << btcAmout << " = " << it->second * \
        strtod(btcAmout.c_str(), 0) << std::endl;
    } else if (it == lines.end()) {
        std::cout << (lines.end() - 1)->first << " => " << btcAmout << " = " \
        << (lines.end() - 1)->second * strtod(btcAmout.c_str(), 0) << std::endl;
    } else {
        std::vector<std::pair<std::string, double> >::iterator prev_it = it - 1;
        std::cout << prev_it->first << " => " << btcAmout << " = " \
        << prev_it->second * strtod(btcAmout.c_str(), 0) << std::endl;
    }
}

bool isNumber(const std::string &numberStr) {
    for (size_t i = 0; i < numberStr.length(); i++) {
        if (!std::isdigit(numberStr[i])) {
            return false;
        }
    }
    return true;
}
