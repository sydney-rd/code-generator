#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <vector>
#include <sstream>
#include "../include/cpp_func.h"
#include "../include/utilities.h"

//data.cpptype  cpptype:internet.ConnStatus  comp:N
std::string cpptype_cpptype_GetValue(const std::string& line) {
    std::string cpptype_token = get_token(line, 2, "  ");
    std::string cpptype_value = get_token(line, 2, ":");
    return cpptype_value;
    //internet.ConnStatus
}

std::string cpptype_cpptype_GetKey(const std::string& line) {
    std::string cpptype_token = get_token(line, 2, "  ");
    std::string cpptype_key = get_token(line, 1, ":");
    return cpptype_key;
//cpptype
}

std::string cpptype_comp_GetValue(const std::string& line) {
    std::string cpptype_token = get_token(line, 3, "  ");
    std::string cpptype_value = get_token(line, 2, ":");
    return cpptype_value;

}

std::string cpptype_comp_GetKey(const std::string& line) {
    std::string cpptype_token = get_token(line, 3, "  ");
    std::string cpptype_key = get_token(line, 1, ":");
    return cpptype_key;
}



