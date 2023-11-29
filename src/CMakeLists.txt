add_library(arithmetic SHARED
    arithmetic.cpp
)

target_include_directories(arithmetic PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
)
