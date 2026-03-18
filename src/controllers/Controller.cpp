# src/controllers/Controller.cpp
#include "Controller.hpp"
void Controller::run() {
    User user = service.getUser();
    Helper helper;
    helper.printUser(user);
}