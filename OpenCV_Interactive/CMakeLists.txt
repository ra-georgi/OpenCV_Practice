cmake_minimum_required(VERSION 3.28)
project(OpenCV_Interactive)
set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)
# Include directories for header files
include_directories(
    ${OpenCV_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}/include
)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/results/bin)

# Source files
set(SOURCES
    src/opencv_tool_image.cpp
    src/main.cpp
)

add_executable(main ${SOURCES})
# Link OpenCV libraries
target_link_libraries(main ${OpenCV_LIBS})
