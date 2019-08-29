#include "sum_integers.hpp"

#include <vector>
#include <cstdlib>   // EXIT_SUCCESS

int main() {
  auto integers = {1, 2, 3, 4, 5};

  if (sum_integers(integers) == 15) {
    return EXIT_SUCCESS;
  } else {
    return EXIT_FAILURE;
  }
}
