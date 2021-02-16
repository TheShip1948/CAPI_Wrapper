//
// Created by beshoy on 15.02.21.
//
#include <iostream>

#include "printer.h"

void Print(std::string s, std::vector<int> v) {
    std::cout << "String = " << s << std::endl;
    std::cout << " ---------- Vector ----------" << std::endl;
    for(const auto& value : v) {
        std::cout << value << std::endl;
    }
}
