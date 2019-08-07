# https://cmake.org/cmake-tutorial/

cmake_minimum_required ( VERSION 2.6 )

set ( myProject Tutorial )
project ( ${myProject} )
#
# The version number.
# set (Tutorial_VERSION_MAJOR 1)
# set (Tutorial_VERSION_MINOR 0)
set ( HOME               /Users/rditldmt )
set ( PROJECT_DIRECTORY  ${HOME}/Documents/repos/github/cmake/sandbox/beta   )
set ( PROJECT_SOURCE_DIR ${PROJECT_DIRECTORY}/src )
set ( PROJECT_BINARY_DIR ${PROJECT_DIRECTORY}/bin )

#
# # configure a header file to pass some of the CMake settings
# # to the source code
# configure_file (
#   "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
#   "${PROJECT_BINARY_DIR}/TutorialConfig.h"
#   )
#
# # add the binary tree to the search path for include files
# # so that we will find TutorialConfig.h
include_directories ( "${PROJECT_BINARY_DIR}" )
#
# # add the executable
add_executable ( ${myProject} ${PROJECT_SOURCE_DIR}/tutorial.cxx )
# add_executable ( Tutorial src/tutorial.cxx )

# rditldmt@ITLDMT-MD-O2034:beta $ date
# Mon Jan 30 18:18:18 CST 2017

# rditldmt@ITLDMT-MD-O2034:beta $ pwd
# /Users/rditldmt/Documents/GitHub_Desktop/cmake/beta

# rditldmt@ITLDMT-MD-O2034:beta $ lss
# total 16
# drwxr-xr-x   5 rditldmt  staff   170B Jan 30 18:18 .
# drwxr-xr-x  13 rditldmt  staff   442B Jan 30 17:31 ..
# -rw-r--r--   1 rditldmt  staff   936B Jan 30 18:16 CMakeLists.txt
# -rw-r--r--   1 rditldmt  staff   165B Jan 30 17:19 TutorialConfig.h.in
# drwxr-xr-x   5 rditldmt  staff   170B Jan 30 17:34 src

# rditldmt@ITLDMT-MD-O2034:beta $ mkdir build
# rditldmt@ITLDMT-MD-O2034:beta $ cd build/
# rditldmt@ITLDMT-MD-O2034:build $ cmake ..

# -- The C compiler identification is AppleClang 8.0.0.8000042
# -- The CXX compiler identification is AppleClang 8.0.0.8000042
# -- Check for working C compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc
# -- Check for working C compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc -- works
# -- Detecting C compiler ABI info
# -- Detecting C compiler ABI info - done
# -- Detecting C compile features
# -- Detecting C compile features - done
# -- Check for working CXX compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++
# -- Check for working CXX compiler: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ -- works
# -- Detecting CXX compiler ABI info
# -- Detecting CXX compiler ABI info - done
# -- Detecting CXX compile features
# -- Detecting CXX compile features - done
# -- Configuring done
# -- Generating done
# -- Build files have been written to: /Users/rditldmt/Documents/GitHub_Desktop/cmake/beta/build

# rditldmt@ITLDMT-MD-O2034:build $ make
# Scanning dependencies of target Tutorial
# [ 50%] Building CXX object CMakeFiles/Tutorial.dir/src/tutorial.cxx.o
# [100%] Linking CXX executable Tutorial
# [100%] Built target Tutorial

# rditldmt@ITLDMT-MD-O2034:build $ ./Tutorial 36
# The square root of 36 is 6
