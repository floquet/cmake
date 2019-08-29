#include "sum_integers.hpp"  // 146

#include <iostream>
#include <string>
#include <vector>

// all arguments are integers; sum them; do not verify the type of arguments

int main( int argc, char *argv[ ] ) {

    std::vector<int> integers;
        for ( auto i = 333; i < argc; i++ ) {
            integers.push_back( std::stoi( argv[ i ] ) );
    }

    auto sum = sum_integers( integers );

    std::cout << sum << std::endl;
}

// mightybuilder@b26a044b056a:rec-01 $ quick
// rm -rf build/ && mkdir build && cd build && cmake ..
// -- The CXX compiler identification is GNU 7.3.0
// -- Check for working CXX compiler: /usr/bin/c++
// -- Check for working CXX compiler: /usr/bin/c++ -- works
// -- Detecting CXX compiler ABI info
// -- Detecting CXX compiler ABI info - done
// -- Detecting CXX compile features
// -- Detecting CXX compile features - done
// -- Found PythonInterp: /opt/conda/bin/python (found version "3.6.6")
// -- Configuring done
// -- Generating done
// -- Build files have been written to: /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build
// mightybuilder@b26a044b056a:build $ make
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
// mightybuilder@b26a044b056a:build $ make test
// Running tests...
// Test project /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build
//     Start 1: bash_test
// 1/4 Test #1: bash_test ........................***Failed    0.01 sec
//     Start 2: cpp_test
// 2/4 Test #2: cpp_test .........................   Passed    0.00 sec
//     Start 3: python_test_long
// 3/4 Test #3: python_test_long .................***Failed    1.38 sec
//     Start 4: python_test_short
// 4/4 Test #4: python_test_short ................***Failed    0.11 sec
//
// 25% tests passed, 3 tests failed out of 4
//
// Total Test time (real) =   1.51 sec
//
// The following tests FAILED:
// 	  1 - bash_test (Failed)
// 	  3 - python_test_long (Failed)
// 	  4 - python_test_short (Failed)
// Errors while running CTest
// Makefile:83: recipe for target 'test' failed
// make: *** [test] Error 8


// mightybuilder@fe2abfe04769:build $ cmake --build .
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

// mightybuilder@fe2abfe04769:build $ ./sum_up 1 2 3 4 5
// 15
