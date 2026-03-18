# CMakeLists.txt
project(ComplexEnterpriseSystem)
set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES src/main.cpp src/services/Service.cpp src/controllers/Controller.cpp src/models/User.cpp src/utils/Helper.cpp src/adapters/DatabaseAdapter.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})