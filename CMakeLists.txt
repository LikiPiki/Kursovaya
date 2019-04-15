cmake_minimum_required(VERSION 3.12)
project(cursovaya)

set(CMAKE_CXX_STANDARD 17)

add_executable(cursovaya main.cpp ComputerBuilder.cpp ComputerBuilder.h Computer.cpp Computer.h OfficeComputer.cpp OfficeComputer.h GamingComputer.cpp GamingComputer.h StudentComputer.cpp StudentComputer.h)