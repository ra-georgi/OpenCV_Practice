cmake_minimum_required(VERSION 3.28)
project(4_Transforms_Contours)
set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)
include_directories(include/)
include_directories(${OpenCV_INCLUDE_DIRS})
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/results/bin)


add_executable(transforms src/transforms.cpp)
add_executable(contours src/contours.cpp)
add_executable(convex_hull src/convex_hull.cpp)

target_link_libraries(transforms ${OpenCV_LIBS})
target_link_libraries(contours ${OpenCV_LIBS})
target_link_libraries(convex_hull ${OpenCV_LIBS})