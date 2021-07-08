project(STM32HALCPP VERSION 0.1 LANGUAGES CXX)

include_directories(../include)

file(GLOB SOURCES ../src)

add_library(${PROJECT_NAME} STATIC SOURCES)
