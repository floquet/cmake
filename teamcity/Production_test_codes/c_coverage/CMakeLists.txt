# Toy problem: CTest coverage feature

# 1. mkdir build && cd build
# 2. cmake ..
# 3. make
# 4. make test

cmake_minimum_required ( VERSION 3.6 )  # petaca2 cmake version 3.6.2

project ( Coverage )
enable_testing ( )  # prepare for CTest

set ( CMAKE_EXE_LINKER_FLAGS="-fprofile-arcs -ftest-coverage -L/opt/local/bin/gcov" )

add_executable ( Coverage ../src/coverage.cpp )

target_link_libraries ( Coverage gcov )  # prepare for CTest

add_test ( NAME Coverage COMMAND Coverage)
