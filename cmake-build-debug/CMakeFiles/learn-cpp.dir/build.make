# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bingo/CLionProjects/learn-cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bingo/CLionProjects/learn-cpp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/learn-cpp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/learn-cpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/learn-cpp.dir/flags.make

CMakeFiles/learn-cpp.dir/gmock/demo2/FooMain.cpp.o: CMakeFiles/learn-cpp.dir/flags.make
CMakeFiles/learn-cpp.dir/gmock/demo2/FooMain.cpp.o: ../gmock/demo2/FooMain.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bingo/CLionProjects/learn-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/learn-cpp.dir/gmock/demo2/FooMain.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/learn-cpp.dir/gmock/demo2/FooMain.cpp.o -c /Users/bingo/CLionProjects/learn-cpp/gmock/demo2/FooMain.cpp

CMakeFiles/learn-cpp.dir/gmock/demo2/FooMain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/learn-cpp.dir/gmock/demo2/FooMain.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bingo/CLionProjects/learn-cpp/gmock/demo2/FooMain.cpp > CMakeFiles/learn-cpp.dir/gmock/demo2/FooMain.cpp.i

CMakeFiles/learn-cpp.dir/gmock/demo2/FooMain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/learn-cpp.dir/gmock/demo2/FooMain.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bingo/CLionProjects/learn-cpp/gmock/demo2/FooMain.cpp -o CMakeFiles/learn-cpp.dir/gmock/demo2/FooMain.cpp.s

CMakeFiles/learn-cpp.dir/gmock/demo2/FooTest.cpp.o: CMakeFiles/learn-cpp.dir/flags.make
CMakeFiles/learn-cpp.dir/gmock/demo2/FooTest.cpp.o: ../gmock/demo2/FooTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bingo/CLionProjects/learn-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/learn-cpp.dir/gmock/demo2/FooTest.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/learn-cpp.dir/gmock/demo2/FooTest.cpp.o -c /Users/bingo/CLionProjects/learn-cpp/gmock/demo2/FooTest.cpp

CMakeFiles/learn-cpp.dir/gmock/demo2/FooTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/learn-cpp.dir/gmock/demo2/FooTest.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bingo/CLionProjects/learn-cpp/gmock/demo2/FooTest.cpp > CMakeFiles/learn-cpp.dir/gmock/demo2/FooTest.cpp.i

CMakeFiles/learn-cpp.dir/gmock/demo2/FooTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/learn-cpp.dir/gmock/demo2/FooTest.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bingo/CLionProjects/learn-cpp/gmock/demo2/FooTest.cpp -o CMakeFiles/learn-cpp.dir/gmock/demo2/FooTest.cpp.s

# Object files for target learn-cpp
learn__cpp_OBJECTS = \
"CMakeFiles/learn-cpp.dir/gmock/demo2/FooMain.cpp.o" \
"CMakeFiles/learn-cpp.dir/gmock/demo2/FooTest.cpp.o"

# External object files for target learn-cpp
learn__cpp_EXTERNAL_OBJECTS =

learn-cpp: CMakeFiles/learn-cpp.dir/gmock/demo2/FooMain.cpp.o
learn-cpp: CMakeFiles/learn-cpp.dir/gmock/demo2/FooTest.cpp.o
learn-cpp: CMakeFiles/learn-cpp.dir/build.make
learn-cpp: lib/libgtestd.a
learn-cpp: lib/libgmockd.a
learn-cpp: lib/libgtestd.a
learn-cpp: CMakeFiles/learn-cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bingo/CLionProjects/learn-cpp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable learn-cpp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/learn-cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/learn-cpp.dir/build: learn-cpp

.PHONY : CMakeFiles/learn-cpp.dir/build

CMakeFiles/learn-cpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/learn-cpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/learn-cpp.dir/clean

CMakeFiles/learn-cpp.dir/depend:
	cd /Users/bingo/CLionProjects/learn-cpp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bingo/CLionProjects/learn-cpp /Users/bingo/CLionProjects/learn-cpp /Users/bingo/CLionProjects/learn-cpp/cmake-build-debug /Users/bingo/CLionProjects/learn-cpp/cmake-build-debug /Users/bingo/CLionProjects/learn-cpp/cmake-build-debug/CMakeFiles/learn-cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/learn-cpp.dir/depend

