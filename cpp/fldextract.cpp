#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <vector>
#include <sstream>
#include <unordered_set>
#include <unordered_map>

#include "../include/fld_func.h"
#include "../include/utilities.h"


// data.field  field:internet.ConnStatus.status  reftype:int  dflt:0  comment:”0 means wifi, 1 means mobile, 2 means no connection”
std::string field_GetField(const std::string& line) {
    std::string field_token = get_token(line, 2, "  ");
    std::string field_value = get_token(field_token, 2, ":");
    std::string field = get_token(field_value, 3, ".");
    return field;
}

//funcs for key/value for field.ssim

std::string field_comment_GetKey(const std::string& line) {
    std::string comment_token = get_token(line, 5, "  ");
    std::string comment_key = get_token(comment_token, 1, ":");
    return comment_key;
}

std::string field_comment_GetValue(const std::string& line) {
    std::string comment_token = get_token(line, 5, "  ");
    std::string comment_value = get_token(comment_token, 2, ":");
    return comment_value;
}

std::string field_ref_GetKey(const std::string& line) {
    std::string ref_token = get_token(line, 3, "  ");
    std::string ref_key = get_token(ref_token, 1, ":");
    return ref_key;
}

std::string field_ref_GetValue(const std::string& line) {
    std::string ref_token = get_token(line, 3, "  ");
    std::string ref_value = get_token(ref_token, 2, ":");
    return ref_value;
}

std::string field_dflt_GetKey(const std::string& line) {
    std::string dflt_token = get_token(line, 4, "  ");
    std::string dflt_key = get_token(dflt_token, 1, ":");
    return dflt_key;
}

std::string field_dflt_GetValue(const std::string& line) {
    std::string dflt_token = get_token(line, 4, "  ");
    std::string dflt_value = get_token(dflt_token, 2, ":");
    return dflt_value;
}


