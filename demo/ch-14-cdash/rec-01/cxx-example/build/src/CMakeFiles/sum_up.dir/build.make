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
CMAKE_SOURCE_DIR = /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example/build

# Include any dependencies generated for this target.
include src/CMakeFiles/sum_up.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/sum_up.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/sum_up.dir/flags.make

src/CMakeFiles/sum_up.dir/main.cpp.o: src/CMakeFiles/sum_up.dir/flags.make
src/CMakeFiles/sum_up.dir/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/sum_up.dir/main.cpp.o"
	cd /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example/build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/sum_up.dir/main.cpp.o -c /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example/src/main.cpp

src/CMakeFiles/sum_up.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sum_up.dir/main.cpp.i"
	cd /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example/src/main.cpp > CMakeFiles/sum_up.dir/main.cpp.i

src/CMakeFiles/sum_up.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sum_up.dir/main.cpp.s"
	cd /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example/build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example/src/main.cpp -o CMakeFiles/sum_up.dir/main.cpp.s

# Object files for target sum_up
sum_up_OBJECTS = \
"CMakeFiles/sum_up.dir/main.cpp.o"

# External object files for target sum_up
sum_up_EXTERNAL_OBJECTS =

src/sum_up: src/CMakeFiles/sum_up.dir/main.cpp.o
src/sum_up: src/CMakeFiles/sum_up.dir/build.make
src/sum_up: src/libsum_integers.a
src/sum_up: src/CMakeFiles/sum_up.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sum_up"
	cd /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sum_up.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/sum_up.dir/build: src/sum_up

.PHONY : src/CMakeFiles/sum_up.dir/build

src/CMakeFiles/sum_up.dir/clean:
	cd /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example/build/src && $(CMAKE_COMMAND) -P CMakeFiles/sum_up.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/sum_up.dir/clean

src/CMakeFiles/sum_up.dir/depend:
	cd /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example/src /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example/build /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example/build/src /home/mightybuilder/repos/github/cmake/demo/ch-14-cdash/rec-01/cxx-example/build/src/CMakeFiles/sum_up.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/sum_up.dir/depend

