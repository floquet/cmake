#include "sum_integers.hpp"
#include <cstdlib>   // EXIT_SUCCESS

#include <vector>

int main() {
    auto integers = { 1, 2, 3, 4, 5 }; // total = 15

    if ( sum_integers( integers ) == 15 ) {
        return EXIT_SUCCESS;
    } else {
        return EXIT_FAILURE;
  }
}
