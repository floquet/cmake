# We use the find_package to find the Boost directories and includes. To help
# find_package we need to set the root directory of the Boost installation.

set(BOOST_ROOT ~/usr/local/boost-1.49.0)

set(Boost_USE_STATIC_LIBS ON)

# The FindBoost.cmake package, which is used by the find_package command,
# caches some variables. This caching has a problem: it causes CMake to always
# use the first type of Boost library found even with a different value of
# Boost_USE_STATIC_LIBS. To workaround that we have to unset the following two
# variables

unset(Boost_INCLUDE_DIR CACHE)
unset(Boost_LIBRARY_DIRS CACHE)

# The above workaround was found here: http://stackoverflow.com/questions/11680168/how-can-i-optionally-link-against-static-or-dynamic-boost-library-using-cmake

# if you do not specify a component here, ${Boost_LIBRARIES} will remain empty
find_package(Boost COMPONENTS unit_test_framework REQUIRED)
if (Boost_FOUND)
  include_directories(${Boost_INCLUDE_DIRS})
endif (Boost_FOUND)

add_executable(my-static-find-package-boost-test ../main-static.cpp ../tests.cpp)

target_link_libraries(my-static-find-package-boost-test ${Boost_LIBRARIES})

add_test(my-static-find-package-boost-test ${EXECUTABLE_OUTPUT_PATH}/my-static-find-package-boost-test)
