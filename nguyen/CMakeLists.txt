# https://tuannguyen68.gitbooks.io/learning-cmake-a-beginner-s-guide/content/chap1/chap1.html

# Specify the minimum version for CMake

cmake_minimum_required(VERSION 2.8)

# Project's name
project ( hello )

# Set the output folder where your program will be created
set ( CMAKE_BINARY_DIR       ${CMAKE_SOURCE_DIR}/bin )
set ( EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR} )
set ( LIBRARY_OUTPUT_PATH    ${CMAKE_BINARY_DIR} )

# The following folder will be included
include_directories ( "${PROJECT_SOURCE_DIR}" )

add_executable ( hello ${PROJECT_SOURCE_DIR}/test.cpp )

# rditldmt@ITLDMT-MD-O2034:nguyen $ date
# Mon Jan 30 15:33:35 CST 2017

# rditldmt@ITLDMT-MD-O2034:nguyen $ pwd
# /Users/rditldmt/hpc/cmake/nguyen

# rditldmt@ITLDMT-MD-O2034:nguyen $ lss
# total 16
# drwxr-xr-x  4 rditldmt  staff   136B Jan 30 15:33 .
# drwxr-xr-x  7 rditldmt  staff   238B Jan 30 15:30 ..
# -rw-r--r--  1 rditldmt  staff   544B Jan 30 15:31 CMakeLists.txt
# -rw-r--r--  1 rditldmt  staff   122B Jan 30 15:30 test.cpp

# rditldmt@ITLDMT-MD-O2034:nguyen $ cmake -H. -Bbuild
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
# -- Build files have been written to: /Users/rditldmt/hpc/cmake/nguyen/build

# rditldmt@ITLDMT-MD-O2034:nguyen $ cmake --build build -- -j3
# Scanning dependencies of target hello
# [ 50%] Building CXX object CMakeFiles/hello.dir/test.cpp.o
# [100%] Linking CXX executable ../bin/hello
# [100%] Built target hello

# rditldmt@ITLDMT-MD-O2034:nguyen $ ./bin/hello
# Hello World

# rditldmt@ITLDMT-MD-O2034:nguyen $ lss
# total 16
# drwxr-xr-x  6 rditldmt  staff   204B Jan 30 15:34 .
# drwxr-xr-x  7 rditldmt  staff   238B Jan 30 15:30 ..
# -rw-r--r--  1 rditldmt  staff   2.4K Jan 30 15:35 CMakeLists.txt
# drwxr-xr-x  3 rditldmt  staff   102B Jan 30 15:34 bin
# drwxr-xr-x  6 rditldmt  staff   204B Jan 30 15:34 build
# -rw-r--r--  1 rditldmt  staff   122B Jan 30 15:30 test.cpp
