cmake_minimum_required(VERSION 3.16)
project(lig_github_collaboration_practice LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_library(device src/device.cpp
        src/Motor.cpp
        include/Motor.h)
target_include_directories(device PUBLIC include)

add_executable(device_app src/main.cpp)
target_link_libraries(device_app PRIVATE device)

enable_testing()
add_executable(device_tests tests/device_tests.cpp)
target_link_libraries(device_tests PRIVATE device)
add_test(NAME device_tests COMMAND device_tests)
