# src/utils/Helper.cpp
#include "Helper.hpp"
#include <iostream>
void Helper::printUser(User user) {
    std::cout << "Name: " << user.getName() << std::endl;
    std::cout << "Age: " << user.getAge() << std::endl;
}