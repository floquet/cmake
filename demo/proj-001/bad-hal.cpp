#include <cstdlib>   // EXIT_SUCCESS
#include <iostream>
#include <string>    // string

  std::string say_hello() { return std::string("I’m sorry, Dave. I’m afraid I can’t do that."); }

  int main() {
      std::cout << say_hello() << std::endl;
  return EXIT_SUCCESS;
}


// mightybuilder@fe2abfe04769:build $ date
// Wed Aug 21 22:50:44 UTC 2019

// mightybuilder@fe2abfe04769:build $ pwd
// /home/mightybuilder/repos/github/cmake/demo/proj-001/build

// mightybuilder@fe2abfe04769:build $ again
// mightybuilder@fe2abfe04769:build $ alias again
// alias again='cd ../; rm -rf build; mkdir build;  cd build'

// mightybuilder@fe2abfe04769:build $ cmake ..
// -- The CXX compiler identification is GNU 7.3.0
// -- Check for working CXX compiler: /usr/bin/c++
// -- Check for working CXX compiler: /usr/bin/c++ -- works
// -- Detecting CXX compiler ABI info
// -- Detecting CXX compiler ABI info - done
// -- Detecting CXX compile features
// -- Detecting CXX compile features - done
// -- Configuring done
// -- Generating done
// -- Build files have been written to: /home/mightybuilder/repos/github/cmake/demo/proj-001/build

// mightybuilder@fe2abfe04769:build $ cmake --build .
// Scanning dependencies of target bad-hal
// [ 50%] Building CXX object CMakeFiles/bad-hal.dir/bad-hal.cpp.o
// [100%] Linking CXX executable bad-hal
// [100%] Built target bad-hal

// mightybuilder@fe2abfe04769:build $ ./bad-hal
// I’m sorry, Dave. I’m afraid I can’t do that.

// mightybuilder@fe2abfe04769:build $ cmake --build . --target help
// The following are some of the valid targets for this Makefile:
// ... all (the default if no target is provided)
// ... clean
// ... depend
// ... rebuild_cache
// ... edit_cache
// ... bad-hal
// ... bad-hal.o
// ... bad-hal.i
// ... bad-hal.s


