cmake_minimum_required(VERSION 3.12)

project(mf1_logger_with_dll LANGUAGES CXX C)

add_executable(${PROJECT_NAME} main.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC
                          ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_link_libraries(${PROJECT_NAME} ${CMAKE_CURRENT_SOURCE_DIR}/libmf1_logger_lib.dll)
