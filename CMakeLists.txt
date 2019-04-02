cmake_minimum_required(VERSION 3.12)
project(cursovaya)

set(CMAKE_CXX_STANDARD 17)

add_executable(cursovaya main.cpp ComputerFactory.cpp ComputerFactory.h ComputerBuilder.cpp ComputerBuilder.h)