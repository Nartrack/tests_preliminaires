# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.21

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/lib/python3.8/dist-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /usr/local/lib/python3.8/dist-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/joan/Documents/python_example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/joan/Documents/python_example/build

# Include any dependencies generated for this target.
include CMakeFiles/main_bind.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main_bind.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main_bind.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main_bind.dir/flags.make

CMakeFiles/main_bind.dir/src/main.cpp.o: CMakeFiles/main_bind.dir/flags.make
CMakeFiles/main_bind.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/main_bind.dir/src/main.cpp.o: CMakeFiles/main_bind.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joan/Documents/python_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main_bind.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main_bind.dir/src/main.cpp.o -MF CMakeFiles/main_bind.dir/src/main.cpp.o.d -o CMakeFiles/main_bind.dir/src/main.cpp.o -c /home/joan/Documents/python_example/src/main.cpp

CMakeFiles/main_bind.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main_bind.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joan/Documents/python_example/src/main.cpp > CMakeFiles/main_bind.dir/src/main.cpp.i

CMakeFiles/main_bind.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main_bind.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joan/Documents/python_example/src/main.cpp -o CMakeFiles/main_bind.dir/src/main.cpp.s

# Object files for target main_bind
main_bind_OBJECTS = \
"CMakeFiles/main_bind.dir/src/main.cpp.o"

# External object files for target main_bind
main_bind_EXTERNAL_OBJECTS =

main_bind.cpython-38-x86_64-linux-gnu.so: CMakeFiles/main_bind.dir/src/main.cpp.o
main_bind.cpython-38-x86_64-linux-gnu.so: CMakeFiles/main_bind.dir/build.make
main_bind.cpython-38-x86_64-linux-gnu.so: CMakeFiles/main_bind.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/joan/Documents/python_example/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared module main_bind.cpython-38-x86_64-linux-gnu.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main_bind.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main_bind.dir/build: main_bind.cpython-38-x86_64-linux-gnu.so
.PHONY : CMakeFiles/main_bind.dir/build

CMakeFiles/main_bind.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main_bind.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main_bind.dir/clean

CMakeFiles/main_bind.dir/depend:
	cd /home/joan/Documents/python_example/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joan/Documents/python_example /home/joan/Documents/python_example /home/joan/Documents/python_example/build /home/joan/Documents/python_example/build /home/joan/Documents/python_example/build/CMakeFiles/main_bind.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main_bind.dir/depend

