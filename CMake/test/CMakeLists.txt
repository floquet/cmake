# https://cmake.org/Wiki/CTest/Coverage/Example
cmake_minimum_required(VERSION 3.9)

# https://stackoverflow.com/questions/24380456/how-can-i-make-cmake-use-gcc-instead-of-clang-on-mac-os-x
# THIS HAS TO COME BEFORE THE PROJECT LINE
set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")

project (TEST)
add_subdirectory (src)
add_subdirectory (test)
enable_testing ()
add_test (NAME MyTest COMMAND Test)

SET(CMAKE_CXX_FLAGS="-g -O0 -Wall -W -Wshadow -Wunused-variable -Wunused-parameter -Wunused-function -Wunused -Wno-system-headers -Wno-deprecated -Woverloaded-virtual -Wwrite-strings -fprofile-arcs -ftest-coverage")

SET(CMAKE_C_FLAGS="-g -O0 -Wall -W -fprofile-arcs -ftest-coverage")

# https://stackoverflow.com/questions/16682156/ld-library-not-found-for-lgsl
#SET(CMAKE_SHARED_LINKER_FLAGS="-fprofile-arcs -ftest-coverage")
SET(CMAKE_EXE_LINKER_FLAGS="-fprofile-arcs -ftest-coverage -L/opt/local/bin/gcov")

add_executable(Coverage ../src/coverage.cpp)
target_link_libraries(Coverage gcov)

add_test(NAME Coverage COMMAND Coverage)
