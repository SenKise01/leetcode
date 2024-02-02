cmake_minimum_required(VERSION 3.14)
project(my_project)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_BUILD_TYPE Debug)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  EasyTests
  ./easy/two_sum.cpp
  ./easy/two_sum.h
  ./easy/tests/two_sum_tests.cpp
)


target_link_libraries(
  EasyTests
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(EasyTests)