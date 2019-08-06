.. highlight:: cpp

Writing unit tests
==================

In this section we show how to write unit tests using the Boost Unit Test
Framework (UTF). The following files contain the relevant source code:

main.cpp
  Demonstrates how to use the UTF when you do not want to link against the UTF
  library.

main-static.cpp
  Demonstrates how to use the UTF when you want to link against the static UTF
  library.

main-dynamic.cpp
  Demonstrates how to use the UTF when you want to link against the dynamic or
  shared UTF library.

tests.cpp
  Demonstrates how to implement tests in a file separate from a main file.

tests.h
  Demonstrates how to write unit tests.

Unit test code
--------------

The actual tests are implemented in header file tests.h:

.. literalinclude:: ../tests.h

Usually I do not implement tests in a header file as they often require
additional code that is better placed in a .cpp file.  In this case I made an
exception to that rule as it allows me to demonstrate the different ways of
using the UTF without having to duplicate the test code.

Boost header file
-----------------

To simplest way to use the UTF is to include the right header file, as shown in
main.cpp:

.. literalinclude:: ../main.cpp

When you compile this into an executable, a main function is automatically
created . This function collects all the tests in a test suite called "Master
Test Suite", executes them and writes the results to stdout. That is all there
is to it.

When you define BOOST_TEST_MODULE instead of BOOST_TEST_MAIN, the main test
suite is named after your define of BOOST_TEST_MODULE. For example, ::

  #define BOOST_TEST_MODULE  "This is my test suite."

will create a main test suite that is called "This is my test suite". This also
holds for the other variants.

Unfortunately there is a limitation with the single header variant: all the
tests have to be implemented in a single file. As the example shows you can
work around this if you implement the tests in header files but that is not the
way header files should be used. If you want to implement the tests in separate
files, you have to link against the static or dynamic Boost unit test library.

Boost static library
--------------------

The files main-static.cpp and tests.cpp show how to use the UTF linked to the
static library:

main-static.cpp

.. literalinclude:: ../main-static.cpp

tests.cpp

.. literalinclude:: ../tests.cpp

This variant differs in two other ways from the single header variant:

  1. the header file to include is different;
  2. the executable has to be linked against
     libboost_unit_test_framework.a.

Note that you have to define BOOST_TEST_MAIN once before the inclusion of
unit_test.hpp. If you do not do this, the required test suite initialization
function is not automatically created. If you do this more than once, the
initialization function will be defined multiple time, breaking the build.

Boost dynamic library
---------------------

The files main-dynamic.cpp and tests.cpp show how to use the UTF linked to the
static library:

main-dynamic.cpp

.. literalinclude:: ../main-dynamic.cpp

tests.cpp

.. literalinclude:: ../tests.cpp

This variant differs in two ways from the static library variant:

  1. BOOST_TEST_DYN_LINK needs to be defined before the inclusion of the header
     file;
  2. the executable has to be linked against
     libboost_unit_test_framework.so.

When you use the dynamic variant and you do not define BOOST_TEST_MAIN or
BOOST_TEST_MODULE, you can (and have to) define your own test runner. This
variant is called the `external test runner variant`_. I have not looked into
this (yet).

.. _`external test runner variant`: http://www.boost.org/doc/libs/1_49_0/libs/test/doc/html/utf/user-guide/usage-variants/extern-test-runner-variant.html
