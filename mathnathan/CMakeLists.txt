# https://cmake.org/cmake-tutorial/

#Specify the version being used aswell as the language
cmake_minimum_required(VERSION 2.6)
#Name your project here
project(fibonacci)

#Sends the -std=c99 flag to the gcc compiler
add_definitions(-std=c99)
#This tells CMake to fib.c and name it fibonacci
add_executable(fibonacci fib.c)

# rditldmt@ITLDMT-MD-O2034:mathnathan $ date
# Mon Jan 30 16:56:06 CST 2017

# rditldmt@ITLDMT-MD-O2034:mathnathan $ pwd
# /Users/rditldmt/Documents/GitHub_Desktop/cmake/mathnathan

# rditldmt@ITLDMT-MD-O2034:mathnathan $ lss
# total 16
# drwxr-xr-x   4 rditldmt  staff   136B Jan 30 16:55 .
# drwxr-xr-x  11 rditldmt  staff   374B Jan 30 16:49 ..
# -rw-r--r--   1 rditldmt  staff   324B Jan 30 16:53 CMakeLists.txt
# -rw-r--r--   1 rditldmt  staff   497B Jan 30 16:51 fib.c

# rditldmt@ITLDMT-MD-O2034:mathnathan $ mkdir build
# rditldmt@ITLDMT-MD-O2034:mathnathan $ cd build/
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
# -- Build files have been written to: /Users/rditldmt/Documents/GitHub_Desktop/cmake/mathnathan/build

# rditldmt@ITLDMT-MD-O2034:build $ make
# Scanning dependencies of target fibonacci
# [ 50%] Building C object CMakeFiles/fibonacci.dir/fib.c.o
# [100%] Linking C executable fibonacci
# [100%] Built target fibonacci

# rditldmt@ITLDMT-MD-O2034:build $ ./fibonacci 500
# 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377
