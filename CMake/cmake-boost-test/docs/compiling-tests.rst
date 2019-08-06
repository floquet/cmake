.. highlight:: cpp

Compiling unit tests
====================

The CMake file list CMakeLists.txt specifies the build of the following
executables:

+-----------------------------------+-------------+-------------------------+--------------------------+---------------------------------------------------+
| executable name                   | uses header | uses static UTF library | uses dynamic UTF library | remark                                            |
+===================================+=============+=========================+==========================+===================================================+
| my-boost-test                     | x           |                         |                          |                                                   |
+-----------------------------------+-------------+-------------------------+--------------------------+---------------------------------------------------+
| my-static-boost-test              |             | x                       |                          | specifies the complete path to the static library |
+-----------------------------------+-------------+-------------------------+--------------------------+---------------------------------------------------+
| my-static-name-boost-test         |             | x                       |                          | specifies the name of the static library          |
+-----------------------------------+-------------+-------------------------+--------------------------+---------------------------------------------------+
| my-static-find-package-boost-test |             | x                       |                          | uses find_package to determine the static library |
+-----------------------------------+-------------+-------------------------+--------------------------+---------------------------------------------------+
| my-dynamic-boost-test             |             |                         | x                        | specifies the name of the static library          |
+-----------------------------------+-------------+-------------------------+--------------------------+---------------------------------------------------+

CMakeLists.txt is extensively documented. For further information I would like
to refer to that file.
