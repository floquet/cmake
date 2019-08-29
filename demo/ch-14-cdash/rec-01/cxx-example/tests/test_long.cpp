#include "sum_integers.hpp"
#include <cstdlib>   // EXIT_SUCCESS

#include <numeric>
#include <vector>

int main( ) {
    // creates vector {1, 2, 3, ..., 999, 1000}
    std::vector<int> integers( 1000 );
    std::iota( integers.begin( ), integers.end( ), 1 );

        if ( sum_integers( integers ) == 500500 ) {
            return EXIT_SUCCESS;
        } else {
            return EXIT_FAILURE;
          }
}
