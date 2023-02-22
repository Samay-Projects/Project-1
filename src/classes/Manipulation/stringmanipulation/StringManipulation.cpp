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
