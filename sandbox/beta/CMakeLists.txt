# https://cmake.org/cmake-tutorial/

cmake_minimum_required ( VERSION 3.12 )

set ( myProject Tutorial )
project ( ${myProject} )
#
# The version number.
# set (Tutorial_VERSION_MAJOR 1)
# set (Tutorial_VERSION_MINOR 0)
set ( HOME               /Users/l127914 )
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
add_executable ( ${myProject} ${PROJECT_SOURCE_DIR}/tutorial.cpp )
# add_executable ( Tutorial src/tutorial.cpp )

# l127914@pn1249300.lanl.gov:beta $ pwd
# /Users/l127914/Documents/repos/github/cmake/sandbox/beta

# l127914@pn1249300.lanl.gov:beta $ date
# Tue Aug  6 23:43:18 MDT 2019

# l127914@pn1249300.lanl.gov:beta $ lss
# total 16
# drwxr-xr-x  5 l127914  staff   160B Aug  6 23:43 .
# drwxr-xr-x  3 l127914  staff    96B Aug  6 23:34 ..
# -rw-r--r--  1 l127914  staff   2.9K Aug  6 23:41 CMakeLists.txt
# -rw-r--r--  1 l127914  staff   165B Aug  6 15:12 TutorialConfig.h.in
# drwxr-xr-x  5 l127914  staff   160B Aug  6 23:38 src

# l127914@pn1249300.lanl.gov:beta $ mkdir build && cd build && cmake ..
# -- The C compiler identification is AppleClang 9.0.0.9000039
# -- The CXX compiler identification is AppleClang 9.0.0.9000039
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
# -- Build files have been written to: /Users/l127914/Documents/repos/github/cmake/sandbox/beta/build

# l127914@pn1249300.lanl.gov:build $ make
# Scanning dependencies of target Tutorial
# [ 50%] Building CXX object CMakeFiles/Tutorial.dir/src/tutorial.cpp.o
# [100%] Linking CXX executable Tutorial
# ld: warning: URGENT: building for OSX, but linking against dylib (/usr/lib/libc++.dylib) built for (unknown). Note: This will be an error in the future.ld: warning: URGENT: building for OSX, but linking against dylib (/usr/lib/libSystem.dylib) built for (unknown). Note: This will be an error in the future.

# [100%] Built target Tutorial
# l127914@pn1249300.lanl.gov:build $ ./Tutorial 144
# The square root of 144 is 12
