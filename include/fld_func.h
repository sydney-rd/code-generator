#include <string>
#ifndef FLD_FUNC
#define FLD_FUNC

std::string field_GetField(const std::string& line);

std::string field_comment_GetKey(const std::string& line);

std::string field_comment_GetValue(const std::string& line);

std::string field_ref_GetKey(const std::string& line);

std::string field_ref_GetValue(const std::string& line);

std::string field_dflt_GetKey(const std::string& line);

std::string field_dflt_GetValue(const std::string& line);

void field();

#endif