cmake_minimum_required( VERSION 3.8 )

project( CTest-Example )

add_executable( CTest-Example CTest-Example )

enable_testing( )

add_test( NAME FirstTest COMMAND ${CMAKE_COMMAND} -E echo 'Simple text' )
