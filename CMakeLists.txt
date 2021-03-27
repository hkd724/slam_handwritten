#第一次写cmake，把CMakeLists.txt写成了CMakeList.txt，真是尴尬
cmake_minimum_required(VERSION 3.4)

project(handwritten_slam)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

find_package(Eigen REQUIRED)
include_directories(${Eigen_INCLUDE_DIRS})

include_directories(${PROJECT_SOURCE_DIR}/include)

add_executable(my_slam slam.cpp)
target_link_libraries(my_slam ${OpenCV_LIBS})
target_link_libraries(my_slam ${Eigen_LIBS})
