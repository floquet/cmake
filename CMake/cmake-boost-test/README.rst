Introduction
------------

This repo contains examples of how to use `CMake`_ in combination with the Unit
Test Framework (UTF) of the `Boost Test Library`_. CMake is "a family of tools
[...]  to build, test and package software"[1]_. The Boost Test Library
"provides [...] components for writing test programs, organizing tests in to
simple test cases and test suites, and controlling their runtime
execution"[2]_.

The sample code is not intended to introduce you to CMake, Boost, the UTF or
unit testing in general. Initially these samples were written to get a feeling
how CMake and the UTF work together.

Prerequisites
-------------

The sample code has been developed and tested under Ubuntu 12.04 using CMake
2.8.7 and Boost 1.49.0. The CMake list file assumes that Boost has been
installed in local directory ~/usr/local/Boost-1.49.0. If that is not the case
either change the location CMake looks for Boost in the list file or make a
link from ~/usr/local/Boost-1.49.0 to the actual location.

Getting started
---------------

Checkout the repository into a directory of your choosing, let CMake create
the Makefile, and build and run the executables::

  $> hg clone https://swinkels@bitbucket.org/swinkels/cmake-boost-test
  $> cd cmake-boost-test/
  $> cmake .
  $> make
  $> make test

For information about the contents of the repo, I refer to the online documentation
that can be found at http://swinkels.bitbucket.org/cmake-boost-test/

.. _CMake: http://www.cmake.org/

.. _Boost Test Library: http://www.boost.org/doc/libs/1_49_0/libs/test/doc/html/index.html
