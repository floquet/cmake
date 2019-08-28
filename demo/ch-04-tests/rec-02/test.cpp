#include "sum_integers.hpp"  // 155

// this tells catch to provide a main()
// only do this in one cpp file
#define CATCH_CONFIG_MAIN // https://github.com/catchorg/Catch2
#include "catch.hpp"
#include <vector>
    TEST_CASE( "Sum of integers for a short vector", "[short]" ) {
        auto integers = {1, 2, 3, 4, 5};
        REQUIRE( sum_integers( integers ) == 15 );
    }
    TEST_CASE( "Sum of integers for a longer vector", "[long]" ) {
        std::vector<int> integers;
            for ( int i = 1; i < 1001; ++i ) {
                integers.push_back( i );
            }
    REQUIRE( sum_integers( integers ) == 500500);
    }

// mightybuilder@b26a044b056a:build $ ctest -V
// UpdateCTestConfiguration  from :/home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-02/build/DartConfiguration.tcl
// UpdateCTestConfiguration  from :/home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-02/build/DartConfiguration.tcl
// Test project /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-02/build
// Constructing a list of tests
// Done constructing a list of tests
// Updating test list for fixtures
// Added 0 tests to meet fixture requirements
// Checking test dependency graph...
// Checking test dependency graph end
// test 1
//     Start 1: catch_test
//
// 1: Test command: /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-02/build/cpp_test "--success"
// 1: Test timeout computed to be: 10000000
// 1:
// 1: ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// 1: cpp_test is a Catch v2.0.1 host application.
// 1: Run with -? for options
// 1:
// 1: -------------------------------------------------------------------------------
// 1: Sum of integers for a short vector
// 1: -------------------------------------------------------------------------------
// 1: /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-02/test.cpp:8
// 1: ...............................................................................
// 1:
// 1: /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-02/test.cpp:10:
// 1: PASSED:
// 1:   REQUIRE( sum_integers( integers ) == 15 )
// 1: with expansion:
// 1:   15 == 15
// 1:
// 1: -------------------------------------------------------------------------------
// 1: Sum of integers for a longer vector
// 1: -------------------------------------------------------------------------------
// 1: /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-02/test.cpp:12
// 1: ...............................................................................
// 1:
// 1: /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-02/test.cpp:17:
// 1: PASSED:
// 1:   REQUIRE( sum_integers( integers ) == 500500 )
// 1: with expansion:
// 1:   500500 (0x7a314) == 500500 (0x7a314)
// 1:
// 1: ===============================================================================
// 1: All tests passed (2 assertions in 2 test cases)
// 1:
// 1/1 Test #1: catch_test .......................   Passed    0.01 sec
//
// 100% tests passed, 0 tests failed out of 1
//
// Total Test time (real) =   0.01 sec
