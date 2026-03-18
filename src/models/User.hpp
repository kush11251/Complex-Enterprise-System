# src/models/User.hpp
#ifndef USER_HPP
#define USER_HPP
#include <string>
class User {
public:
    User(std::string name, int age);
    std::string getName();
    int getAge();
private:
    std::string name;
    int age;
};
#endif