
#include <string>
#include <iostream>
#include "../include/utilities.h"
#include "../include/ns_extract.h"

std::string ns_ns_GetValue(const std::string& line) {
    std::string ns_token = get_token(line, 2, "  ");
    std::string ns_value = get_token(ns_token, 2, ":");
    return ns_value;
}