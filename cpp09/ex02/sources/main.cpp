
#include <iostream>
#include <string>
#include <iomanip>
#include "../includes/main.hpp"

int main(int argc, char **argv) {
    PmergeMe pmergeMe;
    std::string userInput;
    double timeTaken;

    if (argc < 2) {
        std::cerr << "Error";
        return 1;
    }
    for (int i = 1; i < argc; i++) {
        userInput += argv[i];
        userInput += " ";
    }
    try {
        pmergeMe.setNb(userInput);
    } catch (std::invalid_argument &e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    std::cout << "Before:   ";
    pmergeMe.showList();
    std::cout << std::endl;

    clock_t startList = clock();
    pmergeMe.sortList();
    clock_t endList = clock();

    clock_t startDeque = clock();
    pmergeMe.sortDeque();
    clock_t endDeque = clock();

    std::cout << "After:   ";
    pmergeMe.showList();
    std::cout << std::endl;


    timeTaken = double(endList - startList) / CLOCKS_PER_SEC * 100000; //NOLINT
    std::cout << "Time to process a range of " << pmergeMe.getListSize() \
    << " elements with std::list<int> : " << timeTaken << " us" << std::endl;

    timeTaken = double(endDeque - startDeque) / CLOCKS_PER_SEC * 100000; //NOLINT
    std::cout << "Time to process a range of " << pmergeMe.getDequeSize() << \
    " elements with std::deque<int> : " << timeTaken << " us" << std::endl;

    return 0;
}
