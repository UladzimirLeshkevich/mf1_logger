cmake_minimum_required(VERSION 3.5)

project(mf1_logger LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} main.cpp                              
                               log.h
                               log.cpp
                               decorator.cpp
                               decorator.h
                               my_log.cpp
                               my_log.h
                               log_manager.cpp
                               log_manager.h
                                          )

