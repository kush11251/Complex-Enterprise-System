# src/models/User.cpp
#include "User.hpp"
User::User(std::string name, int age) : name(name), age(age) {}
std::string User::getName() { return name; }
int User::getAge() { return age; }