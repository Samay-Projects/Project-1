//
// Created by Samay Magecha on 22/02/2023.
//
#include <iostream>
#include <string>
#include "StringManipulation.h"

const char *StringManipulation::getStr() const {
    return str;
}

void StringManipulation::setStr(string str) {
    const char *cstr = str.c_str();
    StringManipulation::str = cstr;
}

bool StringManipulation::isOnlyDouble() {
    char* endptr = 0;
    strtod(getStr(), &endptr);
    if(*endptr != '\0' || endptr == getStr())
        return false;
    return true;
}

bool StringManipulation::isInt() {
    string s = getStr();
    return !s.empty() && s.find_first_not_of("0123456789") == std::string::npos;
}
