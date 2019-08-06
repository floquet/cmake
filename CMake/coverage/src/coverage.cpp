#include <iostream>
#include <cstdlib> // exit_success, exit_failure
 
int main ( int, char *[] )
{
        printf ( "%s\n", "I will not be printed by CTest." );

    return EXIT_SUCCESS;
}

// dantopa@petaca2.lanl.gov:src $ date
// Thu Aug  3 09:34:51 MDT 2017
// dantopa@petaca2.lanl.gov:src $ pwd
// /home/dantopa/Repos/gitlab/CMake/coverage/src
// dantopa@petaca2.lanl.gov:src $ 
// dantopa@petaca2.lanl.gov:src $ g++ -g -Wall -Wextra -Werror coverage.cpp -o coverage
// dantopa@petaca2.lanl.gov:src $ 
// dantopa@petaca2.lanl.gov:src $ ./coverage 
// I will not be printed by CTest.

