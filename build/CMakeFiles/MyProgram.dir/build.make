# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /workspaces/NeetCode

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/NeetCode/build

# Include any dependencies generated for this target.
include CMakeFiles/MyProgram.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MyProgram.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyProgram.dir/flags.make

CMakeFiles/MyProgram.dir/main.cpp.o: CMakeFiles/MyProgram.dir/flags.make
CMakeFiles/MyProgram.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/workspaces/NeetCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyProgram.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyProgram.dir/main.cpp.o -c /workspaces/NeetCode/main.cpp

CMakeFiles/MyProgram.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyProgram.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /workspaces/NeetCode/main.cpp > CMakeFiles/MyProgram.dir/main.cpp.i

CMakeFiles/MyProgram.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyProgram.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /workspaces/NeetCode/main.cpp -o CMakeFiles/MyProgram.dir/main.cpp.s

# Object files for target MyProgram
MyProgram_OBJECTS = \
"CMakeFiles/MyProgram.dir/main.cpp.o"

# External object files for target MyProgram
MyProgram_EXTERNAL_OBJECTS =

MyProgram: CMakeFiles/MyProgram.dir/main.cpp.o
MyProgram: CMakeFiles/MyProgram.dir/build.make
MyProgram: CMakeFiles/MyProgram.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/workspaces/NeetCode/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MyProgram"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyProgram.dir/link.txt --verbose=$(VERBOSE)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Running MyProgram"
	/workspaces/NeetCode/build/MyProgram

# Rule to build all files generated by this target.
CMakeFiles/MyProgram.dir/build: MyProgram

.PHONY : CMakeFiles/MyProgram.dir/build

CMakeFiles/MyProgram.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyProgram.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyProgram.dir/clean

CMakeFiles/MyProgram.dir/depend:
	cd /workspaces/NeetCode/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/NeetCode /workspaces/NeetCode /workspaces/NeetCode/build /workspaces/NeetCode/build /workspaces/NeetCode/build/CMakeFiles/MyProgram.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyProgram.dir/depend

