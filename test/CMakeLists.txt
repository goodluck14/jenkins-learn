include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


enable_testing()

add_executable(simple_tests
    test_add.cpp
    test_subtract.cpp
)

target_link_libraries(simple_tests
    arithmetic
    GTest::gtest_main
)


include(GoogleTest)
gtest_discover_tests(simple_tests)
