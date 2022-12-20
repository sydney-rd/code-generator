
#include <string>
#include "../include/utilities.h"

std::string get_ns(const std::string& line) {
    std::string ns_token = get_token(line, 2, "  ");
    std::string ns_value = get_token(ns_token, 2, ":");
    return ns_value;
}



