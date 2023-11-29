cmake_minimum_required(VERSION 3.15)

project(jenkins
    LANGUAGES CXX
)

# set the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(src)
add_subdirectory(test)
