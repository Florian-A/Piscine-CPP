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

void checkInput(int argc, char **argv, \
std::ifstream &inputFile, std::ofstream &outputFile) {
    std::string     inputPath;

    if (argc != 4) {
        std::cout << E_USAGE << std::endl;
        exit(EXIT_SUCCESS);
    }
    inputPath = argv[1];
    inputFile.open(inputPath.c_str());
    if (!inputFile.is_open()) {
        std::cout << E_OPENI << std::endl;
        exit(EXIT_FAILURE);
    }
    outputFile.open(inputPath.append(".replace").c_str());
    if (!outputFile.is_open()) {
        std::cout << E_OPENO << std::endl;
        inputFile.close();
        exit(EXIT_FAILURE);
    }
}

std::string fileToStr(std::ifstream &inputFile) {
    std::string str;
    std::string line;

    while (std::getline(inputFile, line)) {
        str.append(line);
        str.append("\n");
    }
    return (str);
}

void replaceStr(std::string &str1, std::string &str2, \
std::string &str3) { //NOLINT
    int needleIndex = 0;

    while (needleIndex != -1) {
        needleIndex = str3.find(str1);
        if (needleIndex != -1) {
            str3.erase(needleIndex, str1.length());
            str3.insert(needleIndex, str2);
        }
    }
}

int main(int argc, char **argv) {
    std::string     str1;
    std::string     str2;
    std::string     str3;
    std::ifstream   inputFile;
    std::ofstream   outputFile;
    std::string     inputPath;

    checkInput(argc, argv, inputFile, outputFile);
    str1 = argv[2];
    str2 = argv[3];
    str3 = fileToStr(inputFile);
    replaceStr(str1, str2, str3);
    outputFile << str3;
    inputFile.close();
    outputFile.close();
    exit(EXIT_SUCCESS);
}
