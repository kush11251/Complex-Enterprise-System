# src/adapters/DatabaseAdapter.hpp
#ifndef DATABASE_ADAPTER_HPP
#define DATABASE_ADAPTER_HPP
#include "models/User.hpp"
class DatabaseAdapter {
public:
    User getUser();
};
#endif