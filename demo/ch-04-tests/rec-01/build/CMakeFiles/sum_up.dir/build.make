# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/cmake/bin/cmake

# The command to remove a file.
RM = /opt/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build

# Include any dependencies generated for this target.
include CMakeFiles/sum_up.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/sum_up.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sum_up.dir/flags.make

CMakeFiles/sum_up.dir/main.cpp.o: CMakeFiles/sum_up.dir/flags.make
CMakeFiles/sum_up.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sum_up.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sum_up.dir/main.cpp.o -c /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/main.cpp

CMakeFiles/sum_up.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sum_up.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/main.cpp > CMakeFiles/sum_up.dir/main.cpp.i

CMakeFiles/sum_up.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sum_up.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/main.cpp -o CMakeFiles/sum_up.dir/main.cpp.s

# Object files for target sum_up
sum_up_OBJECTS = \
"CMakeFiles/sum_up.dir/main.cpp.o"

# External object files for target sum_up
sum_up_EXTERNAL_OBJECTS =

sum_up: CMakeFiles/sum_up.dir/main.cpp.o
sum_up: CMakeFiles/sum_up.dir/build.make
sum_up: libsum_integers.a
sum_up: CMakeFiles/sum_up.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sum_up"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sum_up.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sum_up.dir/build: sum_up

.PHONY : CMakeFiles/sum_up.dir/build

CMakeFiles/sum_up.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sum_up.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sum_up.dir/clean

CMakeFiles/sum_up.dir/depend:
	cd /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01 /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01 /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build /home/mightybuilder/repos/github/cmake/demo/ch-04-tests/rec-01/build/CMakeFiles/sum_up.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sum_up.dir/depend
