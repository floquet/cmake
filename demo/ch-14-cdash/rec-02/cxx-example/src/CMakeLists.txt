# example library
add_library( sum_integers "" )

target_sources( sum_integers
  PRIVATE
    sum_integers.cpp
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/sum_integers.hpp
  )

target_include_directories( sum_integers
  PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}
  )

option( ENABLE_COVERAGE "Enable coverage" ON )

if( ENABLE_COVERAGE )
  if( CMAKE_CXX_COMPILER_ID MATCHES GNU )
    message( STATUS "Coverage analysis with gcov enabled" )
    target_compile_options(sum_integers
      PUBLIC
        -fprofile-arcs -ftest-coverage -g
      )
    target_link_libraries( sum_integers
      PUBLIC
        gcov
      )
  else()
    message( WARNING "Coverage not supported for this compiler" )
  endif()
endif()

# main code
add_executable( sum_up main.cpp )

target_link_libraries( sum_up sum_integers )

# mightybuilder@381d0c947555:build $ date
# Thu Aug 29 03:16:59 UTC 2019

# mightybuilder@381d0c947555:build $ pwd
# /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-02/cxx-example/build

# mightybuilder@381d0c947555:build $ echo $host_name
# mighty-builder

# mightybuilder@381d0c947555:build $ echo $HOSTNAME
# 381d0c947555

# mightybuilder@381d0c947555:build $ echo $USER
# mightybuilder

# mightybuilder@381d0c947555:build $ cmake ..
# -- The CXX compiler identification is GNU 7.3.0
# -- Check for working CXX compiler: /usr/bin/c++
# -- Check for working CXX compiler: /usr/bin/c++ -- works
# -- Detecting CXX compiler ABI info
# -- Detecting CXX compiler ABI info - done
# -- Detecting CXX compile features
# -- Detecting CXX compile features - done
# -- Coverage analysis with gcov enabled
# -- Configuring done
# -- Generating done
# -- Build files have been written to: /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-02/cxx-example/build
# mightybuilder@381d0c947555:build $ cmake --build . --target Experimental
