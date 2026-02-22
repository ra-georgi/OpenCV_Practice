cmake_minimum_required(VERSION 3.28)
project(DSA_Reference)
set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/results/bin)

include_directories(include/)

add_library(dsa_library
    src/arrays_strings_1.cpp
    src/linked_lists_2.cpp
    src/hashing_3.cpp
    src/stacks_queues_4.cpp
    src/binary_search_5.cpp
    src/binary_tree_6.cpp
    src/bst_7.cpp
    src/graphs_8.cpp
)

add_executable(main src/main.cpp)
target_link_libraries(main PRIVATE dsa_library)
