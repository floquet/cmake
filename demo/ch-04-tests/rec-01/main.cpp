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
