# src/controllers/Controller.hpp
#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP
#include "services/Service.hpp"
#include "models/User.hpp"
#include "utils/Helper.hpp"
#include "adapters/DatabaseAdapter.hpp"
class Controller {
public:
    void run();
private:
    Service service;
};
#endif