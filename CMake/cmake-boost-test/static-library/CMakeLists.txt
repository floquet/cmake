include_directories(~/usr/local/boost-1.49.0/include)

# Add executable target 'my-static-boost-test' to be built from
# 'main-static.cpp' and 'tests.cpp'
add_executable(my-static-boost-test ../main-static.cpp ../tests.cpp)

# Link executable 'my-static-boost-test' against external static library
# 'libboost_unit_test_framework'
#
# If you provide an absolute path, it cannot be specified by ~/usr/local etc.
target_link_libraries(my-static-boost-test $ENV{HOME}/usr/local/boost-1.49.0/lib/libboost_unit_test_framework.a)

# the link_directories directive has to be placed before the add_executable,
# otherwise it is not picked up
#
# Note that you can use the ~ indicator to denote the root directory
link_directories(~/usr/local/boost-1.49.0/lib)

# Add executable target 'my-static-name-boost-test' to be built from
# 'main-static.cpp' and 'tests.cpp'
add_executable(my-static-name-boost-test ../main-static.cpp ../tests.cpp)

# Link executable 'my-static-name-boost-test' against external static library
# 'libboost_unit_test_framework'
target_link_libraries(my-static-name-boost-test libboost_unit_test_framework.a)

add_test(my-static-boost-test ${EXECUTABLE_OUTPUT_PATH}/my-static-boost-test)
add_test(my-static-name-boost-test ${EXECUTABLE_OUTPUT_PATH}/my-static-name-boost-test)
