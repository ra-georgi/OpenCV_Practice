cmake_minimum_required(VERSION 3.28)
project(3_Image_Processing)
set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)
include_directories(include/)
include_directories(${OpenCV_INCLUDE_DIRS})
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/results/bin)


add_executable(grayscale src/grayscale.cpp)
add_executable(threshold src/threshold.cpp)
add_executable(blurring src/blurring.cpp)
add_executable(edge_detection src/edge_detection.cpp)

target_link_libraries(grayscale ${OpenCV_LIBS})
target_link_libraries(threshold ${OpenCV_LIBS})
target_link_libraries(blurring ${OpenCV_LIBS})
target_link_libraries(edge_detection ${OpenCV_LIBS})


