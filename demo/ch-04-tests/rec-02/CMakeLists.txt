cmake_minimum_required( VERSION 3.5 FATAL_ERROR )

# project name and language
project( rec-01 LANGUAGES CXX )

# require C++11 (auto)
set( CMAKE_CXX_STANDARD 11 )
set( CMAKE_CXX_EXTENSIONS OFF )
set( CMAKE_CXX_STANDARD_REQUIRED ON )

find_package( PythonInterp REQUIRED )
find_program( BASH_EXECUTABLE NAMES bash REQUIRED )

# example library
add_library( sum_integers sum_integers.cpp )

# main code
add_executable( sum_up main.cpp )
target_link_libraries( sum_up sum_integers )

# testing binary
add_executable( cpp_test test.cpp )
target_link_libraries( cpp_test sum_integers )

# enable testing functionality
enable_testing( )

# define tests for bash, c++, python
add_test(
  NAME bash_test
  COMMAND ${BASH_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test.sh $<TARGET_FILE:sum_up>
   )

add_test(
  NAME cpp_test
  COMMAND $<TARGET_FILE:cpp_test>
   )

add_test(
  NAME python_test_long
  COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test.py --executable $<TARGET_FILE:sum_up>
   )

add_test(
  NAME python_test_short
  COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test.py --short --executable $<TARGET_FILE:sum_up>
   )

# mightybuilder@fe2abfe04769:build $ date
# Thu Aug 22 05:35:47 UTC 2019

# mightybuilder@fe2abfe04769:build $ pwd
# /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build

# mightybuilder@fe2abfe04769:rec-01 $ mkdir -p build
# mightybuilder@fe2abfe04769:rec-01 $ cd build/
# mightybuilder@fe2abfe04769:build $ cmake ..
# -- The CXX compiler identification is GNU 7.3.0
# -- Check for working CXX compiler: /usr/bin/c++
# -- Check for working CXX compiler: /usr/bin/c++ -- works
# -- Detecting CXX compiler ABI info
# -- Detecting CXX compiler ABI info - done
# -- Detecting CXX compile features
# -- Detecting CXX compile features - done
# -- Found PythonInterp: /opt/conda/bin/python (found version "3.6.6")
# -- Configuring done
# -- Generating done
# -- Build files have been written to: /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build

# mightybuilder@fe2abfe04769:build $ cmake --build .
# Scanning dependencies of target sum_integers
# [ 16%] Building CXX object CMakeFiles/sum_integers.dir/sum_integers.cpp.o
# [ 33%] Linking CXX static library libsum_integers.a
# [ 33%] Built target sum_integers
# Scanning dependencies of target sum_up
# [ 50%] Building CXX object CMakeFiles/sum_up.dir/main.cpp.o
# [ 66%] Linking CXX executable sum_up
# [ 66%] Built target sum_up
# Scanning dependencies of target cpp_test
# [ 83%] Building CXX object CMakeFiles/cpp_test.dir/test.cpp.o
# [100%] Linking CXX executable cpp_test
# [100%] Built target cpp_test

# mightybuilder@fe2abfe04769:build $ ./sum_up 1 2 3 4 5
# 15

# mightybuilder@fe2abfe04769:build $ ctest
# Test project /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build
#     Start 1: bash_test
# 1/4 Test #1: bash_test ........................   Passed    0.01 sec
#     Start 2: cpp_test
# 2/4 Test #2: cpp_test .........................   Passed    0.00 sec
#     Start 3: python_test_long
# 3/4 Test #3: python_test_long .................   Passed    0.12 sec
#     Start 4: python_test_short
# 4/4 Test #4: python_test_short ................   Passed    0.11 sec

# 100% tests passed, 0 tests failed out of 4

# Total Test time (real) =   0.26 sec

# mightybuilder@fe2abfe04769:build $ ./sum_up 1 2 3 4 5 6
# 21

# mightybuilder@fe2abfe04769:build $ ctest
# Test project /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build
#     Start 1: bash_test
# 1/4 Test #1: bash_test ........................   Passed    0.01 sec
#     Start 2: cpp_test
# 2/4 Test #2: cpp_test .........................   Passed    0.00 sec
#     Start 3: python_test_long
# 3/4 Test #3: python_test_long .................   Passed    0.12 sec
#     Start 4: python_test_short
# 4/4 Test #4: python_test_short ................   Passed    0.12 sec

# 100% tests passed, 0 tests failed out of 4

# Total Test time (real) =   0.25 sec
