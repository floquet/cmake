#include "sum_integers.hpp"

#include <iostream>
#include <string>
#include <vector>

// all arguments are integers; sum them; do not verify the type of arguments

int main( int argc, char *argv[ ] ) {

    std::vector<int> integers;
        for ( auto i = 1; i < argc; i++ ) {
            integers.push_back( std::stoi( argv[ i ] ) );
    }

    auto sum = sum_integers( integers );

    std::cout << sum << std::endl;
}

// mightybuilder@b26a044b056a:rec-02 $ date
// Wed Aug 28 19:28:43 UTC 2019

// mightybuilder@b26a044b056a:rec-02 $ pwd
// /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-02

// mightybuilder@b26a044b056a:rec-02 $ quick
// rm -rf build/ && mkdir build && cd build && cmake ..
// -- The CXX compiler identification is GNU 7.3.0
// -- Check for working CXX compiler: /usr/bin/c++
// -- Check for working CXX compiler: /usr/bin/c++ -- works
// -- Detecting CXX compiler ABI info
// -- Detecting CXX compiler ABI info - done
// -- Detecting CXX compile features
// -- Detecting CXX compile features - done
// -- Configuring done
// -- Generating done
// -- Build files have been written to: /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-02/build

// mightybuilder@b26a044b056a:build $ cmake --build .
// Scanning dependencies of target sum_integers
// [ 16%] Building CXX object CMakeFiles/sum_integers.dir/sum_integers.cpp.o
// [ 33%] Linking CXX static library libsum_integers.a
// [ 33%] Built target sum_integers
// Scanning dependencies of target sum_up
// [ 50%] Building CXX object CMakeFiles/sum_up.dir/main.cpp.o
// [ 66%] Linking CXX executable sum_up
// [ 66%] Built target sum_up
// Scanning dependencies of target cpp_test
// [ 83%] Building CXX object CMakeFiles/cpp_test.dir/test.cpp.o
// [100%] Linking CXX executable cpp_test
// [100%] Built target cpp_test
// mightybuilder@b26a044b056a:build $ ctest
// Test project /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-02/build
//     Start 1: catch_test
// 1/1 Test #1: catch_test .......................   Passed    0.01 sec
//
// 100% tests passed, 0 tests failed out of 1
//
// Total Test time (real) =   0.01 sec
