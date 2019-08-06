.. highlight:: cpp

Running the test executables
============================

CTest is a testing tool distributed as a part of CMake. It can do a lot of
things, such as "automate updating, configuring, building, testing, performing
memory checking, [and] performing coverage"[1]_. I use CTest to create Makefile
targets that run the test executables that have been build. To do so I added
the following lines to the CMake listfile::

  enable_testing()

  # The first parameter specifies the name of the test. The second parameter the
  # path to the executable to execute.
  add_test(my-boost-test ${CMAKE_CURRENT_BINARY_DIR}/my-boost-test)
  # When the second parameter specifies an executable target, you can omit the
  # path as is done in the following examples
  add_test(my-static-boost-test my-static-boost-test)
  add_test(my-static-name-boost-test my-static-name-boost-test)
  add_test(my-dynamic-boost-test my-dynamic-boost-test)

When I want to run all the tests. I only have to execute::

  make test

which gives me the following output::

  {{ d['make-test.sh|bash']|indent(2) }}

The command ``make test`` runs ``ctest``. If you use ``ctest`` directly, you
can specify which tests to run. For example,::

  $> ctest -R my-boost-test

only executes ``my-boost-test`` and gives me the following output::

  {{ d['ctest.sh|bash']|indent(2) }}

The option ``-R`` tells ``ctest`` to only run the tests whose name are matched
by the regular expression that follows the option. So in the previous example,
the command ``ctest -R my-boost`` would have executed the same test.

The above is not even the tip of the iceberg of functionality that CTest
provides. To get a brief description of all the CTest options, execute::

 $> ctest --help

For a more elaborate description in HTML, execute::

 $> ctest --help-html

.. [1] The quote is from `this public Wiki page`_ of the
       `Visualization Toolkit (VTK)`_.

.. _this public Wiki page: http://vtk.org/Wiki/CMake/Testing_With_CTest

.. _Visualization Toolkit (VTK): http://vtk.org/
