#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <vector>
#include <sstream>
#include <unordered_set>
#include <unordered_map>

#include "../include/field_extract.h"
#include "../include/utilities.h"

std::string field_field_GetValue(const std::string& line) {
    std::string field_token = get_token(line, 2, "  ");
    std::string field_value = get_token(field_token, 2, ":");
    return field_value;
}


std::string field_ref_GetValue(const std::string& line) {
    std::string ref_token = get_token(line, 3, "  ");
    std::string ref_value = get_token(ref_token, 2, ":");
    return ref_value;
}

std::string field_dflt_GetValue(const std::string& line) {
    std::string dflt_token = get_token(line, 4, "  ");
    std::string dflt_value = get_token(dflt_token, 2, ":");
    return dflt_value;
}

std::string field_comment_GetValue(const std::string& line) {
    std::string comment_token = get_token(line, 5, "  ");
    std::string comment_value = get_token(comment_token, 2, ":");
    return comment_value;
}
