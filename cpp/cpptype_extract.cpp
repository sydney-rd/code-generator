#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <sstream>
#include "../include/cpptype_extract.h"
#include "../include/utilities.h"

std::string cpptype_cpptype_GetValue(const std::string& line) {
    std::string cpptype_token = get_token(line, 2, "  ");
    std::string cpptype_value = get_token(line, 2, ":");
    return cpptype_value;
}

std::string cpptype_comp_GetValue(const std::string& line) {
    std::string cpptype_token = get_token(line, 3, "  ");
    std::string cpptype_value = get_token(line, 2, ":");
    return cpptype_value;
}
