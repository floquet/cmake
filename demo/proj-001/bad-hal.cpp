#include <cstdlib>
#include <iostream>
#include <string>

  std::string say_hello() { return std::string("I’m sorry, Dave. I’m afraid I can’t do that."); }

  int main() {
      std::cout << say_hello() << std::endl;
  return EXIT_SUCCESS;
}
