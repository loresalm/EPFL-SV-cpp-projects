# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/lorenzo/Desktop/EPFL-SV-cpp-projects

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lorenzo/Desktop/EPFL-SV-cpp-projects/b

# Include any dependencies generated for this target.
include CMakeFiles/SFMLTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SFMLTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SFMLTest.dir/flags.make

CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.o: CMakeFiles/SFMLTest.dir/flags.make
CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.o: ../src/graphic_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lorenzo/Desktop/EPFL-SV-cpp-projects/b/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.o -c /home/lorenzo/Desktop/EPFL-SV-cpp-projects/src/graphic_test.cpp

CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lorenzo/Desktop/EPFL-SV-cpp-projects/src/graphic_test.cpp > CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.i

CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lorenzo/Desktop/EPFL-SV-cpp-projects/src/graphic_test.cpp -o CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.s

CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.o.requires:

.PHONY : CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.o.requires

CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.o.provides: CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.o.requires
	$(MAKE) -f CMakeFiles/SFMLTest.dir/build.make CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.o.provides.build
.PHONY : CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.o.provides

CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.o.provides.build: CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.o


CMakeFiles/SFMLTest.dir/src/network.cpp.o: CMakeFiles/SFMLTest.dir/flags.make
CMakeFiles/SFMLTest.dir/src/network.cpp.o: ../src/network.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lorenzo/Desktop/EPFL-SV-cpp-projects/b/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SFMLTest.dir/src/network.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLTest.dir/src/network.cpp.o -c /home/lorenzo/Desktop/EPFL-SV-cpp-projects/src/network.cpp

CMakeFiles/SFMLTest.dir/src/network.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLTest.dir/src/network.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lorenzo/Desktop/EPFL-SV-cpp-projects/src/network.cpp > CMakeFiles/SFMLTest.dir/src/network.cpp.i

CMakeFiles/SFMLTest.dir/src/network.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLTest.dir/src/network.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lorenzo/Desktop/EPFL-SV-cpp-projects/src/network.cpp -o CMakeFiles/SFMLTest.dir/src/network.cpp.s

CMakeFiles/SFMLTest.dir/src/network.cpp.o.requires:

.PHONY : CMakeFiles/SFMLTest.dir/src/network.cpp.o.requires

CMakeFiles/SFMLTest.dir/src/network.cpp.o.provides: CMakeFiles/SFMLTest.dir/src/network.cpp.o.requires
	$(MAKE) -f CMakeFiles/SFMLTest.dir/build.make CMakeFiles/SFMLTest.dir/src/network.cpp.o.provides.build
.PHONY : CMakeFiles/SFMLTest.dir/src/network.cpp.o.provides

CMakeFiles/SFMLTest.dir/src/network.cpp.o.provides.build: CMakeFiles/SFMLTest.dir/src/network.cpp.o


CMakeFiles/SFMLTest.dir/src/random.cpp.o: CMakeFiles/SFMLTest.dir/flags.make
CMakeFiles/SFMLTest.dir/src/random.cpp.o: ../src/random.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lorenzo/Desktop/EPFL-SV-cpp-projects/b/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SFMLTest.dir/src/random.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SFMLTest.dir/src/random.cpp.o -c /home/lorenzo/Desktop/EPFL-SV-cpp-projects/src/random.cpp

CMakeFiles/SFMLTest.dir/src/random.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SFMLTest.dir/src/random.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lorenzo/Desktop/EPFL-SV-cpp-projects/src/random.cpp > CMakeFiles/SFMLTest.dir/src/random.cpp.i

CMakeFiles/SFMLTest.dir/src/random.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SFMLTest.dir/src/random.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lorenzo/Desktop/EPFL-SV-cpp-projects/src/random.cpp -o CMakeFiles/SFMLTest.dir/src/random.cpp.s

CMakeFiles/SFMLTest.dir/src/random.cpp.o.requires:

.PHONY : CMakeFiles/SFMLTest.dir/src/random.cpp.o.requires

CMakeFiles/SFMLTest.dir/src/random.cpp.o.provides: CMakeFiles/SFMLTest.dir/src/random.cpp.o.requires
	$(MAKE) -f CMakeFiles/SFMLTest.dir/build.make CMakeFiles/SFMLTest.dir/src/random.cpp.o.provides.build
.PHONY : CMakeFiles/SFMLTest.dir/src/random.cpp.o.provides

CMakeFiles/SFMLTest.dir/src/random.cpp.o.provides.build: CMakeFiles/SFMLTest.dir/src/random.cpp.o


# Object files for target SFMLTest
SFMLTest_OBJECTS = \
"CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.o" \
"CMakeFiles/SFMLTest.dir/src/network.cpp.o" \
"CMakeFiles/SFMLTest.dir/src/random.cpp.o"

# External object files for target SFMLTest
SFMLTest_EXTERNAL_OBJECTS =

SFMLTest: CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.o
SFMLTest: CMakeFiles/SFMLTest.dir/src/network.cpp.o
SFMLTest: CMakeFiles/SFMLTest.dir/src/random.cpp.o
SFMLTest: CMakeFiles/SFMLTest.dir/build.make
SFMLTest: ../include/SFML-2.5.1/lib/libsfml-graphics.so.2.5.1
SFMLTest: ../include/SFML-2.5.1/lib/libsfml-audio.so.2.5.1
SFMLTest: ../include/SFML-2.5.1/lib/libsfml-window.so.2.5.1
SFMLTest: ../include/SFML-2.5.1/lib/libsfml-system.so.2.5.1
SFMLTest: CMakeFiles/SFMLTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lorenzo/Desktop/EPFL-SV-cpp-projects/b/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable SFMLTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SFMLTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SFMLTest.dir/build: SFMLTest

.PHONY : CMakeFiles/SFMLTest.dir/build

CMakeFiles/SFMLTest.dir/requires: CMakeFiles/SFMLTest.dir/src/graphic_test.cpp.o.requires
CMakeFiles/SFMLTest.dir/requires: CMakeFiles/SFMLTest.dir/src/network.cpp.o.requires
CMakeFiles/SFMLTest.dir/requires: CMakeFiles/SFMLTest.dir/src/random.cpp.o.requires

.PHONY : CMakeFiles/SFMLTest.dir/requires

CMakeFiles/SFMLTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SFMLTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SFMLTest.dir/clean

CMakeFiles/SFMLTest.dir/depend:
	cd /home/lorenzo/Desktop/EPFL-SV-cpp-projects/b && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lorenzo/Desktop/EPFL-SV-cpp-projects /home/lorenzo/Desktop/EPFL-SV-cpp-projects /home/lorenzo/Desktop/EPFL-SV-cpp-projects/b /home/lorenzo/Desktop/EPFL-SV-cpp-projects/b /home/lorenzo/Desktop/EPFL-SV-cpp-projects/b/CMakeFiles/SFMLTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SFMLTest.dir/depend

