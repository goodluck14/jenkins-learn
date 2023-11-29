cmake_minimum_required(VERSION 3.16.0)

set(CMAKE_BUILD_TYPE Release)


project(jenkins_learn  LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)


SET(CMAKE_SKIP_BUILD_RPATH FALSE)
SET(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)


add_executable(${PROJECT_NAME}
    "main.cpp"
)


target_include_directories(${PROJECT_NAME} PUBLIC
    "/usr/include"
)

target_link_directories(${PROJECT_NAME} PUBLIC
"${CMAKE_CURRENT_SOURCE_DIR}"
)


target_link_libraries(${PROJECT_NAME} dl)

