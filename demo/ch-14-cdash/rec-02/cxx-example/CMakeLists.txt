# set minimum cmake version
cmake_minimum_required ( VERSION 3.5 FATAL_ERROR )

# project name and language
project ( recipe-02 LANGUAGES CXX )

# require C++11
set ( CMAKE_CXX_STANDARD          11 )
set ( CMAKE_CXX_EXTENSIONS        OFF )
set ( CMAKE_CXX_STANDARD_REQUIRED ON )

# process src/CMakeLists.txt
add_subdirectory ( src )

enable_testing ( )

# allow to report to a cdash dashboard
include ( CTest )

# process tests/CMakeLists.txt
add_subdirectory ( tests )

# rm -rf build/ && mkdir build && cd build && cmake ..
# -- The CXX compiler identification is GNU 7.3.0
# -- Check for working CXX compiler: /usr/bin/c++
# -- Check for working CXX compiler: /usr/bin/c++ -- works
# -- Detecting CXX compiler ABI info
# -- Detecting CXX compiler ABI info - done
# -- Detecting CXX compile features
# -- Detecting CXX compile features - done
# -- Coverage analysis with gcov enabled
# -- Configuring done
# -- Generating done
# -- Build files have been written to: /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-02/cxx-example/build

# mightybuilder@381d0c947555:build $ cmake ..
# -- Coverage analysis with gcov enabled
# -- Configuring done
# -- Generating done
# -- Build files have been written to: /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-02/cxx-example/build

# mightybuilder@381d0c947555:build $ cmake --build . --target Experimental
# Scanning dependencies of target Experimental
#    Site: 381d0c947555
#    Build name: Linux-c++
# Create new tag: 20190829-0302 - Experimental
# Configure project
#    Each . represents 1024 bytes of output
#     . Size of output: 0K
# Build project
#    Each symbol represents 1024 bytes of output.
#    '!' represents an error and '*' a warning.
#     . Size of output: 1K
#    0 Compiler errors
#    0 Compiler warnings
# Test project /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-02/cxx-example/build
#     Start 1: test_short
# 1/2 Test #1: test_short .......................   Passed    0.00 sec
#     Start 2: test_long
# 2/2 Test #2: test_long ........................   Passed    0.00 sec

# 100% tests passed, 0 tests failed out of 2

# Total Test time (real) =   0.01 sec
# Performing coverage
#    Processing coverage (each . represents one file):
#     ...
#    Accumulating results (each . represents one file):
#     ...
# 	Covered LOC:         14
# 	Not covered LOC:     7
# 	Total LOC:           21
# 	Percentage Coverage: 66.67%
# Submit files (using http)
#    Using HTTP submit method
#    Drop site:http://my.cdash.org/submit.php?project=cmake-cookbook
#    Uploaded: /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-02/cxx-example/build/Testing/20190829-0302/Build.xml
#    Uploaded: /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-02/cxx-example/build/Testing/20190829-0302/Configure.xml
#    Uploaded: /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-02/cxx-example/build/Testing/20190829-0302/Coverage.xml
#    Uploaded: /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-02/cxx-example/build/Testing/20190829-0302/CoverageLog-0.xml
#    Uploaded: /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-02/cxx-example/build/Testing/20190829-0302/Test.xml
#    Submission successful
# Built target Experimental
