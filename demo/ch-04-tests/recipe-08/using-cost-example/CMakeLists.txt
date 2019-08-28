# set minimum cmake version  179
# first run is serial which collects test times

cmake_minimum_required ( VERSION 3.5 FATAL_ERROR )

# project name
project ( recipe-08 LANGUAGES NONE )

# detect python
find_package ( PythonInterp REQUIRED )

set ( CTEST_PARALLEL_LEVEL 4 )
message ( "Environment variable CTEST_PARALLEL_LEVEL: ${CTEST_PARALLEL_LEVEL}" )

# message("Environment variable USERNAME: $ENV{USERNAME}")
# define tests
enable_testing( )

add_test ( a ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test/a.py )
add_test ( b ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test/b.py )
add_test ( c ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test/c.py )
add_test ( d ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test/d.py )
set_tests_properties ( a b c d PROPERTIES COST 0.5 )

add_test ( e ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test/e.py )
add_test ( f ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test/f.py )
add_test ( g ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test/g.py )
set_tests_properties ( e f g PROPERTIES COST 1.5 )

add_test ( h ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test/h.py )
set_tests_properties ( h PROPERTIES COST 2.5 )

add_test ( i ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test/i.py )
set_tests_properties ( i PROPERTIES COST 3.5 )

add_test ( j ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/test/j.py )
set_tests_properties ( j PROPERTIES COST 4.5 )

# mightybuilder@b26a044b056a:build $ again
# cd ../; rm -rf build; mkdir build;  cd build

# mightybuilder@b26a044b056a:build $ cmake ..
# -- Found PythonInterp: /opt/conda/bin/python (found version "3.6.6")
# -- Configuring done
# -- Generating done
# -- Build files have been written to: /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-08/using-cost-example/build

# mightybuilder@b26a044b056a:build $ ctest
# Test project /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-08/using-cost-example/build
#       Start 10: j
#  1/10 Test #10: j ................................   Passed    4.55 sec
#       Start  9: i
#  2/10 Test  #9: i ................................   Passed    3.55 sec
#       Start  8: h
#  3/10 Test  #8: h ................................   Passed    2.55 sec
#       Start  5: e
#  4/10 Test  #5: e ................................   Passed    1.55 sec
#       Start  6: f
#  5/10 Test  #6: f ................................   Passed    1.55 sec
#       Start  7: g
#  6/10 Test  #7: g ................................   Passed    1.54 sec
#       Start  1: a
#  7/10 Test  #1: a ................................   Passed    0.54 sec
#       Start  2: b
#  8/10 Test  #2: b ................................   Passed    0.54 sec
#       Start  3: c
#  9/10 Test  #3: c ................................   Passed    0.54 sec
#       Start  4: d
# 10/10 Test  #4: d ................................   Passed    0.54 sec

# 100% tests passed, 0 tests failed out of 10

# Total Test time (real) =  17.47 sec

# mightybuilder@b26a044b056a:build $ ctest --parallel 4
# Test project /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-08/using-cost-example/build
#       Start 10: j
#       Start  9: i
#       Start  8: h
#       Start  5: e
#  1/10 Test  #5: e ................................   Passed    1.54 sec
#       Start  6: f
#  2/10 Test  #8: h ................................   Passed    2.54 sec
#       Start  7: g
#  3/10 Test  #6: f ................................   Passed    1.54 sec
#       Start  1: a
#  4/10 Test  #9: i ................................   Passed    3.54 sec
#       Start  2: b
#  5/10 Test  #1: a ................................   Passed    0.54 sec
#       Start  3: c
#  6/10 Test  #2: b ................................   Passed    0.54 sec
#       Start  4: d
#  7/10 Test  #7: g ................................   Passed    1.54 sec
#  8/10 Test  #3: c ................................   Passed    0.54 sec
#  9/10 Test #10: j ................................   Passed    4.54 sec
# 10/10 Test  #4: d ................................   Passed    0.54 sec

# 100% tests passed, 0 tests failed out of 10

# Total Test time (real) =   4.64 sec
# mightybuilder@b26a044b056a:build $ ctest --parallel 8
# Test project /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-08/using-cost-example/build
#       Start 10: j
#       Start  9: i
#       Start  8: h
#       Start  5: e
#       Start  6: f
#       Start  7: g
#       Start  1: a
#       Start  2: b
#  1/10 Test  #1: a ................................   Passed    0.54 sec
#       Start  3: c
#  2/10 Test  #2: b ................................   Passed    0.54 sec
#       Start  4: d
#  3/10 Test  #3: c ................................   Passed    0.54 sec
#  4/10 Test  #4: d ................................   Passed    0.54 sec
#  5/10 Test  #5: e ................................   Passed    1.55 sec
#  6/10 Test  #6: f ................................   Passed    1.56 sec
#  7/10 Test  #7: g ................................   Passed    1.56 sec
#  8/10 Test  #8: h ................................   Passed    2.56 sec
#  9/10 Test  #9: i ................................   Passed    3.54 sec
# 10/10 Test #10: j ................................   Passed    4.54 sec

# 100% tests passed, 0 tests failed out of 10

# Total Test time (real) =   4.55 sec
