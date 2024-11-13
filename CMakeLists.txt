cmake_minimum_required(VERSION 3.29)
project(codeforces)

set(CMAKE_CXX_STANDARD 14)

include_directories(cpp_basics)

add_executable(codeforces
    cpp_basics/calculator.cpp
    cpp_basics/capital.cpp
    cpp_basics/coordinates.cpp
    cpp_basics/datatype.cpp
    cpp_basics/factorial.cpp
    cpp_basics/gcd.cpp
    cpp_basics/intervals.cpp
    cpp_basics/makesum.cpp
    cpp_basics/maxMin.cpp
    cpp_basics/palindrome.cpp
    cpp_basics/palindromeArray.cpp
    cpp_basics/remainder.cpp
    cpp_basics/remainder.h
    cpp_basics/template.cpp
    cpp_basics/threeNumbers.cpp
    template.cpp
        "level 1/power.cpp")
