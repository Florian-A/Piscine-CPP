#pragma once
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:27:36 by f██████           #+#    #+#             */
/*   Updated: 2022/11/16 15:13:02 by f██████          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <vector>
#include <utility>
#include <cstdlib>
#include <algorithm>

class BitcoinExchange {
 private:
    std::ifstream databaseStream;

    bool isValidDate(std::string dateStr) const;
    bool isValidNumber(std::string numberStr) const;
    void showPortfolioValue(std::vector<std::pair<std::string, double> > \
    lines, std::string searchDate, std::string btcAmout) const;

 public:
    BitcoinExchange();
    ~BitcoinExchange();

    BitcoinExchange(const BitcoinExchange &src);
    BitcoinExchange &operator=(const BitcoinExchange &rhs);

    void searchPortfolioValue(std::string dateStr, \
    std::string numberStr);
};

bool isNumber(const std::string &numberStr);
