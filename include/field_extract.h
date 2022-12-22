#include <string>
#ifndef FIELD_EXTRACT
#define FIELD_EXTRACT


std::string field_field_GetValue(const std::string& line);

std::string field_ref_GetValue(const std::string& line);

std::string field_dflt_GetValue(const std::string& line);

std::string field_comment_GetValue(const std::string& line);

#endif