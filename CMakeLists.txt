cmake_minimum_required(VERSION 3.12)

project(mf1_logger_bin LANGUAGES CXX C)

add_executable(${PROJECT_NAME} main.cpp log_manager.h)

target_link_libraries(${PROJECT_NAME} LINK_PUBLIC mf1_logger_lib)

