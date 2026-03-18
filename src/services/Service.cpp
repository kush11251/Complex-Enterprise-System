# src/services/Service.cpp
#include "Service.hpp"
User Service::getUser() {
    return databaseAdapter.getUser();
}