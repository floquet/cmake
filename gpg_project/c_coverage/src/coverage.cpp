// #include <iostream>
#include <stdio.h>
#include <cstdlib> // exit_success, exit_failure

int main ( int, char *[] )
{
        printf ( "%s\n", "I will never, ever be printed by CTest." );

    return EXIT_SUCCESS;
}

// l127914@pn1249300.lanl.gov:src $ date
// Tue Aug 15 11:24:44 MDT 2017
// l127914@pn1249300.lanl.gov:src $ pwd
// /Users/l127914/Repos/gitlab/Production/Production_test_codes/c_coverage/src
// l127914@pn1249300.lanl.gov:src $ g++ -g -Wall -Wextra -Werror coverage.cpp -o coverage
// l127914@pn1249300.lanl.gov:src $ ./coverage
// I will never, ever be printed by CTest.
