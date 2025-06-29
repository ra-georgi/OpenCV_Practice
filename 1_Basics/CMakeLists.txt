cmake_minimum_required(VERSION 3.28)
project(1_Basics)
set(CMAKE_CXX_STANDARD 17)

include_directories(include/)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/results/bin/)
add_executable(main src/main.cpp)