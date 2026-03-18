# src/services/Service.hpp
#ifndef SERVICE_HPP
#define SERVICE_HPP
#include "models/User.hpp"
#include "adapters/DatabaseAdapter.hpp"
class Service {
public:
    User getUser();
private:
    DatabaseAdapter databaseAdapter;
};
#endif