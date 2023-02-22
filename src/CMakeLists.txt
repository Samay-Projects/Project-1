cmake_minimum_required(VERSION 3.24)
project(src)

set(CMAKE_CXX_STANDARD 23)

add_executable(src classes/main.cpp classes/BankAccount/BankAccount.cpp classes/Manipulation/stringmanipulation/StringManipulation.cpp classes/Manipulation/stringmanipulation/StringManipulation.h)
