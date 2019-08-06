# Toy problem
#   build an elementary C program
#   demonstrate the "coverage" feature of ctest

# at directory coverage
# 1. mkdir build && cd build
# 2. cmake ..
# 3. make
# 4. make test

cmake_minimum_required ( VERSION 3.6 )  # petaca2 cmake version 3.6.2

# https://stackoverflow.com/questions/24380456/how-can-i-make-cmake-use-gcc-instead-of-clang-on-mac-os-x
# must precede "project" declaration
# set ( CMAKE_C_COMPILER   "gcc" )
# set ( CMAKE_CXX_COMPILER "g++" )

project ( Coverage )
enable_testing ( )  # prepare for CTest

# set ( CMAKE_CXX_FLAGS="-g -O0 -Wall -W -Wshadow -Wunused-variable -Wunused-parameter -Wunused-function -Wunused -Wno-system-headers -Wno-deprecated -Woverloaded-virtual -Wwrite-strings -fprofile-arcs -ftest-coverage" )

# set ( CMAKE_C_FLAGS="-g -O0 -Wall -W -fprofile-arcs -ftest-coverage" )

# https://stackoverflow.com/questions/16682156/ld-library-not-found-for-lgsl
#SET(CMAKE_SHARED_LINKER_FLAGS="-fprofile-arcs -ftest-coverage")
# set ( CMAKE_EXE_LINKER_FLAGS="-fprofile-arcs -ftest-coverage -L/opt/local/bin/gcov" )

add_executable ( Coverage ../src/coverage.cpp )
target_link_libraries ( Coverage gcov )  # prepare for CTest

add_test ( NAME Coverage COMMAND Coverage)

# dantopa@petaca2.lanl.gov:demo $ quick
# -- The C compiler identification is GNU 6.3.1
# -- The CXX compiler identification is GNU 6.3.1
# -- Check for working C compiler: /usr/bin/gcc
# -- Check for working C compiler: /usr/bin/gcc -- works
# -- Detecting C compiler ABI info
# -- Detecting C compiler ABI info - done
# -- Detecting C compile features
# -- Detecting C compile features - done
# -- Check for working CXX compiler: /usr/bin/g++
# -- Check for working CXX compiler: /usr/bin/g++ -- works
# -- Detecting CXX compiler ABI info
# -- Detecting CXX compiler ABI info - done
# -- Detecting CXX compile features
# -- Detecting CXX compile features - done
# -- Configuring done
# -- Generating done
# -- Build files have been written to: /home/dantopa/Repos/gitlab/CMake/demo/build
# dantopa@petaca2.lanl.gov:build $ make
# Scanning dependencies of target Coverage
# [ 50%] Building CXX object CMakeFiles/Coverage.dir/src/coverage.cpp.o
# [100%] Linking CXX executable Coverage
# [100%] Built target Coverage
# dantopa@petaca2.lanl.gov:build $ make test
# Running tests...
# Test project /home/dantopa/Repos/gitlab/CMake/demo/build
#    Start 1: Coverage
# 1/1 Test #1: Coverage .........................   Passed    0.00 sec
#
# 100% tests passed, 0 tests failed out of 1
#
# Total Test time (real) =   0.00 sec
# dantopa@petaca2.lanl.gov:build $ date
# Thu Aug  3 09:03:21 MDT 2017
# dantopa@petaca2.lanl.gov:build $ pwd
# /home/dantopa/Repos/gitlab/CMake/demo/build

# https://cmake.org/Wiki/CTest/Coverage/Example

