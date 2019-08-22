# CMake generated Testfile for 
# Source directory: /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01
# Build directory: /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(bash_test "/bin/bash" "/home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/test.sh" "/home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build/sum_up")
add_test(cpp_test "/home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build/cpp_test")
add_test(python_test_long "/opt/conda/bin/python" "/home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/test.py" "--executable" "/home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build/sum_up")
add_test(python_test_short "/opt/conda/bin/python" "/home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/test.py" "--short" "--executable" "/home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build/sum_up")
