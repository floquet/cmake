# CMake : Cross-Platform Makefile Generator
# instructions for compile and build
cmake_minimum_required (VERSION 3.5)

# project (Classical molecular dynamics proxy application)
project (myProject)

# https://stackoverflow.com/questions/21163188/most-simple-but-complete-cmake-example

## file globbing

# search the directory tree when cmake is invoked and put all files that match the pattern in the variable `sources`
file(GLOB_RECURSE sources      src/*.c src/*.h)
#file(GLOB_RECURSE data resources/*)

## target definitions

# add the data to the target, so it becomes visible in some IDE
# add_executable(example ${sources} ${data})
add_executable(myProject ${sources})

# compiler flags
# target_compile_options(example PUBLIC -std=c++1y -Wall -Wfloat-conversion)
target_compile_options(myProject -DDOUBLE -DDO_MPI)

# this lets me include files relative to the root src dir with a <> pair
target_include_directories(myProject PUBLIC src)

# this copies all resource files in the build directory
# we need this, because we want to work with paths relative to the executable
file(COPY ${data} DESTINATION resources)
