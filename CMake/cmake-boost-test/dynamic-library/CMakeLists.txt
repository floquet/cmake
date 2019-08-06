include_directories(~/usr/local/boost-1.49.0/include)

# the link_directories directive has to be placed before the add_executable,
# otherwise it is not picked up
#
# Note that you can use the ~ indicator to denote the root directory
link_directories(~/usr/local/boost-1.49.0/lib)

# Add executable target 'my-dynamic-boost-test' to be built from
# 'main-dynamic.cpp' and 'tests.cpp'
add_executable(my-dynamic-boost-test ../main-dynamic.cpp ../tests.cpp)

# Link executable 'my-dynamic-boost-test' against external shared library
# 'libboost_unit_test_framework'
target_link_libraries(my-dynamic-boost-test libboost_unit_test_framework.so)

add_test(my-dynamic-boost-test ${EXECUTABLE_OUTPUT_PATH}/my-dynamic-boost-test)
