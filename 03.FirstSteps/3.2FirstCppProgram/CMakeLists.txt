cmake_minimum_required(VERSION 3.20)

# Project name
project(nakama)

# Set C++ standard to C++20
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create executable
add_executable(nakama main.cpp src/chopper.h src/chopper.cpp)
target_include_directories(nakama PRIVATE ${CMAKE_SOURCE_DIR}/src)

# For multi-file projects with headers and separate .cpp files
# add_executable(nakama main.cpp dog.cpp dog.h cat.cpp cat.h)
