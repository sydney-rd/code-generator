#include <string>
#include <fstream>
#include <iostream>

#include "../include/ns_extract.h"
#include "../include/cpptype_extract.h"
#include "../include/field_extract.h"

void load_ns() {
    std::ifstream file("data/ns.ssim");
    std::string line;
    while (std::getline(file, line)) {
        std::string ns_value = ns_ns_GetValue(line);
        std::cout << ns_value << std::endl;
    }
}

void load_field() {
    std::ifstream file("data/field.ssim");
    std::string line;
    while (std::getline(file, line)) {
    }
}

void load_cpptype() {
    std::ifstream file("data/cpptype.ssim");
    std::string line;
    while (std::getline(file, line)) {
        std::cout << cpptype_cpptype_GetValue(line) << std::endl;
    }
}