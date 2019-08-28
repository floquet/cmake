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
    REQUIRE( sum_integers( integers ) == 500500 );
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

// mightybuilder@b26a044b056a:build $ ./cpp_test --success
//
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
// cpp_test is a Catch v2.0.1 host application.
// Run with -? for options
//
// -------------------------------------------------------------------------------
// Sum of integers for a short vector
// -------------------------------------------------------------------------------
// /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-02/test.cpp:8
// ...............................................................................
//
// /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-02/test.cpp:10:
// PASSED:
//   REQUIRE( sum_integers( integers ) == 15 )
// with expansion:
//   15 == 15
//
// -------------------------------------------------------------------------------
// Sum of integers for a longer vector
// -------------------------------------------------------------------------------
// /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-02/test.cpp:12
// ...............................................................................
//
// /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-02/test.cpp:17:
// PASSED:
//   REQUIRE( sum_integers( integers ) == 500500 )
// with expansion:
//   500500 (0x7a314) == 500500 (0x7a314)
//
// ===============================================================================
// All tests passed (2 assertions in 2 test cases)

// mightybuilder@b26a044b056a:build $ ./cpp_test -help
//
// Catch v2.0.1
// usage:
//   cpp_test [<test name|pattern|tags> ... ] options
//
// where options are:
//   -?, -h, --help                                  display usage information
//   -l, --list-tests                                list all/matching test
//                                                   cases
//   -t, --list-tags                                 list all/matching tags
//   -s, --success                                   include successful tests in
//                                                   output
//   -b, --break                                     break into debugger on
//                                                   failure
//   -e, --nothrow                                   skip exception tests
//   -i, --invisibles                                show invisibles (tabs,
//                                                   newlines)
//   -o, --out <filename>                            output filename
//   -r, --reporter <name>                           reporter to use (defaults
//                                                   to console)
//   -n, --name <name>                               suite name
//   -a, --abort                                     abort at first failure
//   -x, --abortx <no. failures>                     abort after x failures
//   -w, --warn <warning name>                       enable warnings
//   -d, --durations <yes|no>                        show test durations
//   -f, --input-file <filename>                     load test names to run from
//                                                   a file
//   -#, --filenames-as-tags                         adds a tag for the filename
//   -c, --section <section name>                    specify section to run
//   -v, --verbosity <quiet|normal|high>             set output verbosity
//   --list-test-names-only                          list all/matching test
//                                                   cases names only
//   --list-reporters                                list all reporters
//   --order <decl|lex|rand>                         test case order (defaults
//                                                   to decl)
//   --rng-seed <'time'|number>                      set a specific seed for
//                                                   random numbers
//   --use-colour <yes|no>                           should output be colourised
//   --libidentify                                   report name and version
//                                                   according to libidentify
//                                                   standard
//   --wait-for-keypress <start|exit|both>           waits for a keypress before
//                                                   exiting
//   --benchmark-resolution-multiple <multiplier>    multiple of clock
//                                                   resolution to run
//                                                   benchmarks
//
// For more detailed usage please see the project docs
//
// mightybuilder@b26a044b056a:build $ ./cpp_test --success --use-colour yes

// Force Failure

// mightybuilder@b26a044b056a:build $ again
// cd ../; rm -rf build; mkdir build;  cd build
// mightybuilder@b26a044b056a:build $ cmake ..
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
// 1: /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-02/test.cpp:17: FAILED:
// 1:   REQUIRE( sum_integers( integers ) == 500000500000 )
// 1: with expansion:
// 1:   1784293664 (0x6a5a2920)
// 1:   ==
// 1:   500000500000 (0x746a5a2920)
// 1:
// 1: ===============================================================================
// 1: test cases: 2 | 1 passed | 1 failed
// 1: assertions: 2 | 1 passed | 1 failed
// 1:
// 1/1 Test #1: catch_test .......................***Failed    0.06 sec
//
// 0% tests passed, 1 tests failed out of 1
//
// Total Test time (real) =   0.06 sec
//
// The following tests FAILED:
// 	  1 - catch_test (Failed)
// Errors while running CTest
