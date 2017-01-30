cmake_minimum_required (VERSION 2.6)
project (Tutorial)
# The version number.
set (Tutorial_VERSION_MAJOR 1)
set (Tutorial_VERSION_MINOR 0)

# configure a header file to pass some of the CMake settings
# to the source code
configure_file (
  "${PROJECT_SOURCE_DIR}/TutorialConfig.h.in"
  "${PROJECT_BINARY_DIR}/TutorialConfig.h"
  )

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories("${PROJECT_BINARY_DIR}")

# add the executable
add_executable(Tutorial tutorial.cxx)

# rditldmt@ITLDMT-MD-O2034:alpha $ date
# Mon Jan 30 17:39:24 CST 2017

# rditldmt@ITLDMT-MD-O2034:alpha $ pwd
# /Users/rditldmt/Documents/GitHub_Desktop/cmake/alpha

# rditldmt@ITLDMT-MD-O2034:alpha $ lss
# total 24
# drwxr-xr-x   5 rditldmt  staff   170B Jan 30 17:39 .
# drwxr-xr-x  13 rditldmt  staff   442B Jan 30 17:31 ..
# -rw-r--r--   1 rditldmt  staff   539B Jan 30 17:24 CMakeLists.txt
# -rw-r--r--   1 rditldmt  staff   165B Jan 30 17:23 TutorialConfig.h.in
# -rw-r--r--   1 rditldmt  staff   477B Jan 30 17:23 tutorial.cxx

# rditldmt@ITLDMT-MD-O2034:alpha $ mkdir build
# rditldmt@ITLDMT-MD-O2034:alpha $ cd build/

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
# -- Build files have been written to: /Users/rditldmt/Documents/GitHub_Desktop/cmake/alpha/build

# rditldmt@ITLDMT-MD-O2034:build $ make
# Scanning dependencies of target Tutorial
# [ 50%] Building CXX object CMakeFiles/Tutorial.dir/tutorial.cxx.o
# [100%] Linking CXX executable Tutorial
# [100%] Built target Tutorial

# rditldmt@ITLDMT-MD-O2034:build $ ./Tutorial 10000
# The square root of 10000 is 100
