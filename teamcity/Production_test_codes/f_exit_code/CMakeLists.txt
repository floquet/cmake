# based on Neil Larson's repository
# git@gitlab.lanl.gov:nnc/teamcity-ci-test.git

cmake_minimum_required ( VERSION 3.5 )

project ( call_exit_test Fortran )

enable_testing ( )

# https://cmake.org/cmake/help/latest/variable/CMAKE_CURRENT_SOURCE_DIR.html
set ( PROJECT_DIRECTORY  ${CMAKE_CURRENT_SOURCE_DIR} ) 
set ( PROJECT_SOURCE_DIR ${PROJECT_DIRECTORY}/src )

add_executable ( test_unit ${PROJECT_SOURCE_DIR}/call_exit_test.F90 )

add_test ( my_test test_unit )







# l127914@pn1249300.lanl.gov:neil $ date
# Wed Aug  9 08:04:23 MDT 2017

# l127914@pn1249300.lanl.gov:neil $ pwd
# /Users/l127914/Repos/gitlab/CMake/neil

# l127914@pn1249300.lanl.gov:neil $ rm -rf build/ && mkdir build && cd build

# l127914@pn1249300.lanl.gov:build $ cmake ..
# -- The Fortran compiler identification is GNU 7.1.1
# -- Checking whether Fortran compiler has -isysroot
# -- Checking whether Fortran compiler has -isysroot - yes
# -- Checking whether Fortran compiler supports OSX deployment target flag
# -- Checking whether Fortran compiler supports OSX deployment target flag - yes
# -- Check for working Fortran compiler: /opt/local/bin/gfortran
# -- Check for working Fortran compiler: /opt/local/bin/gfortran  -- works
# -- Detecting Fortran compiler ABI info
# -- Detecting Fortran compiler ABI info - done
# -- Checking whether /opt/local/bin/gfortran supports Fortran 90
# -- Checking whether /opt/local/bin/gfortran supports Fortran 90 -- yes
# -- Configuring done
# -- Generating done
# -- Build files have been written to: /Users/l127914/Repos/gitlab/CMake/neil/build
# l127914@pn1249300.lanl.gov:build $ make
# Scanning dependencies of target test_unit
# [ 50%] Building Fortran object CMakeFiles/test_unit.dir/src/call_exit_test.F90.o
# [100%] Linking Fortran executable test_unit
# [100%] Built target test_unit

# l127914@pn1249300.lanl.gov:build $ make test
# Running tests...
# Test project /Users/l127914/Repos/gitlab/CMake/neil/build
#     Start 1: my_test
#     1/1 Test #1: my_test ..........................***Failed    0.01 sec
#
#     0% tests passed, 1 tests failed out of 1
#
#     Total Test time (real) =   0.01 sec
#
#     The following tests FAILED:
#           1 - my_test (Failed)
#           Errors while running CTest
#           make: *** [test] Error 8
