# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/wujud/.clion-2019.2.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/wujud/.clion-2019.2.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wujud/Clones/cplusplus/Log

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wujud/Clones/cplusplus/Log/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Log.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Log.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Log.dir/flags.make

CMakeFiles/Log.dir/main.cpp.o: CMakeFiles/Log.dir/flags.make
CMakeFiles/Log.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wujud/Clones/cplusplus/Log/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Log.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Log.dir/main.cpp.o -c /home/wujud/Clones/cplusplus/Log/main.cpp

CMakeFiles/Log.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Log.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wujud/Clones/cplusplus/Log/main.cpp > CMakeFiles/Log.dir/main.cpp.i

CMakeFiles/Log.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Log.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wujud/Clones/cplusplus/Log/main.cpp -o CMakeFiles/Log.dir/main.cpp.s

CMakeFiles/Log.dir/Static.cpp.o: CMakeFiles/Log.dir/flags.make
CMakeFiles/Log.dir/Static.cpp.o: ../Static.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wujud/Clones/cplusplus/Log/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Log.dir/Static.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Log.dir/Static.cpp.o -c /home/wujud/Clones/cplusplus/Log/Static.cpp

CMakeFiles/Log.dir/Static.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Log.dir/Static.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/wujud/Clones/cplusplus/Log/Static.cpp > CMakeFiles/Log.dir/Static.cpp.i

CMakeFiles/Log.dir/Static.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Log.dir/Static.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/wujud/Clones/cplusplus/Log/Static.cpp -o CMakeFiles/Log.dir/Static.cpp.s

# Object files for target Log
Log_OBJECTS = \
"CMakeFiles/Log.dir/main.cpp.o" \
"CMakeFiles/Log.dir/Static.cpp.o"

# External object files for target Log
Log_EXTERNAL_OBJECTS =

Log: CMakeFiles/Log.dir/main.cpp.o
Log: CMakeFiles/Log.dir/Static.cpp.o
Log: CMakeFiles/Log.dir/build.make
Log: CMakeFiles/Log.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wujud/Clones/cplusplus/Log/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Log"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Log.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Log.dir/build: Log

.PHONY : CMakeFiles/Log.dir/build

CMakeFiles/Log.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Log.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Log.dir/clean

CMakeFiles/Log.dir/depend:
	cd /home/wujud/Clones/cplusplus/Log/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wujud/Clones/cplusplus/Log /home/wujud/Clones/cplusplus/Log /home/wujud/Clones/cplusplus/Log/cmake-build-debug /home/wujud/Clones/cplusplus/Log/cmake-build-debug /home/wujud/Clones/cplusplus/Log/cmake-build-debug/CMakeFiles/Log.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Log.dir/depend

