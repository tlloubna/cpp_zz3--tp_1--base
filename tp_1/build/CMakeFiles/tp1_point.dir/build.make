# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.30

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
CMAKE_COMMAND = /snap/cmake/1415/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1415/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1/build

# Include any dependencies generated for this target.
include CMakeFiles/tp1_point.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tp1_point.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tp1_point.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp1_point.dir/flags.make

CMakeFiles/tp1_point.dir/src/main_point.cpp.o: CMakeFiles/tp1_point.dir/flags.make
CMakeFiles/tp1_point.dir/src/main_point.cpp.o: /home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1/src/main_point.cpp
CMakeFiles/tp1_point.dir/src/main_point.cpp.o: CMakeFiles/tp1_point.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tp1_point.dir/src/main_point.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp1_point.dir/src/main_point.cpp.o -MF CMakeFiles/tp1_point.dir/src/main_point.cpp.o.d -o CMakeFiles/tp1_point.dir/src/main_point.cpp.o -c /home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1/src/main_point.cpp

CMakeFiles/tp1_point.dir/src/main_point.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/tp1_point.dir/src/main_point.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1/src/main_point.cpp > CMakeFiles/tp1_point.dir/src/main_point.cpp.i

CMakeFiles/tp1_point.dir/src/main_point.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/tp1_point.dir/src/main_point.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1/src/main_point.cpp -o CMakeFiles/tp1_point.dir/src/main_point.cpp.s

# Object files for target tp1_point
tp1_point_OBJECTS = \
"CMakeFiles/tp1_point.dir/src/main_point.cpp.o"

# External object files for target tp1_point
tp1_point_EXTERNAL_OBJECTS = \
"/home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1/build/CMakeFiles/common.dir/src/cartesien.cpp.o" \
"/home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1/build/CMakeFiles/common.dir/src/nuage.cpp.o" \
"/home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1/build/CMakeFiles/common.dir/src/point.cpp.o" \
"/home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1/build/CMakeFiles/common.dir/src/polaire.cpp.o" \
"/home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1/build/CMakeFiles/common.dir/src/vecteur.cpp.o"

tp1_point: CMakeFiles/tp1_point.dir/src/main_point.cpp.o
tp1_point: CMakeFiles/common.dir/src/cartesien.cpp.o
tp1_point: CMakeFiles/common.dir/src/nuage.cpp.o
tp1_point: CMakeFiles/common.dir/src/point.cpp.o
tp1_point: CMakeFiles/common.dir/src/polaire.cpp.o
tp1_point: CMakeFiles/common.dir/src/vecteur.cpp.o
tp1_point: CMakeFiles/tp1_point.dir/build.make
tp1_point: CMakeFiles/tp1_point.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tp1_point"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp1_point.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp1_point.dir/build: tp1_point
.PHONY : CMakeFiles/tp1_point.dir/build

CMakeFiles/tp1_point.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tp1_point.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tp1_point.dir/clean

CMakeFiles/tp1_point.dir/depend:
	cd /home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1 /home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1 /home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1/build /home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1/build /home/loubna/Bureau/cpp/cpp_zz3--tp_1--base/tp_1/build/CMakeFiles/tp1_point.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/tp1_point.dir/depend
