cmake_minimum_required(VERSION 3.7)
project(kata)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(Launcher Launcher.cpp Library.cpp)

if (NOT CTEST_CONFIGURATION_TYPE)
   set(CTEST_CONFIGURATION_TYPE ${CMAKE_BUILD_TYPE})
   message("-- Setting CTest Configuration Type to ${CTEST_CONFIGURATION_TYPE}")
endif()

add_executable(TestDriver Tests.cpp Library.cpp)
target_link_libraries(TestDriver gtest gtest_main)

enable_testing()
add_test(NAME TestDriver COMMAND TestDriver -C $<CONFIG>)
