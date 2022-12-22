#include <iostream>
#include <string>
#include "../include/utilities.h"

// data.cpptype  cpptype:internet.ConnStatus  comp:N
// cpptype:internet.ConnStatus  comp:N

std::string get_token(std::string str, int token_n, const std::string& delimiter) {
    std::size_t found = str.find(delimiter);
    while (found != str.npos) {
        str.erase(0, found + delimiter.size() - 1);
        token_n--;
        if (token_n == 1) {
            break;
        }
    };
    found = str.find(delimiter);
    std::cout << str  << " " << delimiter << std::endl;
    std::cout << found << std::endl;

    return "";
}
