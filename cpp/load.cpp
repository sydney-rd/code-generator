#include <string>
#include <fstream>
#include <iostream>

#include "../include/ns_func.h"
#include "../include/cpp_func.h"
#include "../include/fld_func.h"

void load_ns() {
    std::ifstream file("data/ns.ssim");
    std::string line;
    while (std::getline(file, line)) {
        std::string ns_value = get_ns(line);
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

    }
}