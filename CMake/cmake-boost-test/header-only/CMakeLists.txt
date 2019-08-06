include_directories(~/usr/local/boost-1.49.0/include)

# Add executable target 'my-boost-test' to be built from 'main.cpp'
add_executable(header-only-test ../main.cpp)

# The command adds a test to CTest:
#    - the 1st parameter is the name of the test
#    - the 2nd parameter is the path to the executable that implements the test
add_test(header-only-test ${EXECUTABLE_OUTPUT_PATH}/header-only-test)

message(${EXECUTABLE_OUTPUT_PATH})

# The official documentation on add_test ("cmake --help-command add_test"),
# states the following:
#
#   If COMMAND specifies an executable target (created by add_executable) it
#   will automatically be replaced by the location of the executable created at
#   build time.
#
# This is only true if the executable target is built in one of the default
# locations that ctest checks. If that would be the case for our example, which
# it is not, we could write the above add_test statement like this:
#
# add_test(header-only-test header-only-test)
