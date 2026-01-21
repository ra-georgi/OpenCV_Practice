cmake_minimum_required(VERSION 3.28)
project(W1_D1)
set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/results/bin)

add_executable(d1 src/d1.cpp)
add_executable(d2 src/d2.cpp)
add_executable(d3 src/d3.cpp)