# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/builder/packages/nheko/src/nheko-0.10.2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/builder/packages/nheko/src/build

# Include any dependencies generated for this target.
include third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/compiler_depend.make

# Include the progress variables for this target.
include third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/progress.make

# Include the compile flags for this target's objects.
include third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/flags.make

third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/SingleApplication_autogen/mocs_compilation.cpp.o: third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/flags.make
third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/SingleApplication_autogen/mocs_compilation.cpp.o: third_party/SingleApplication-3.3.2/SingleApplication_autogen/mocs_compilation.cpp
third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/SingleApplication_autogen/mocs_compilation.cpp.o: third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/builder/packages/nheko/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/SingleApplication_autogen/mocs_compilation.cpp.o"
	cd /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/SingleApplication_autogen/mocs_compilation.cpp.o -MF CMakeFiles/SingleApplication.dir/SingleApplication_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/SingleApplication.dir/SingleApplication_autogen/mocs_compilation.cpp.o -c /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2/SingleApplication_autogen/mocs_compilation.cpp

third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/SingleApplication_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SingleApplication.dir/SingleApplication_autogen/mocs_compilation.cpp.i"
	cd /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2/SingleApplication_autogen/mocs_compilation.cpp > CMakeFiles/SingleApplication.dir/SingleApplication_autogen/mocs_compilation.cpp.i

third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/SingleApplication_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SingleApplication.dir/SingleApplication_autogen/mocs_compilation.cpp.s"
	cd /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2/SingleApplication_autogen/mocs_compilation.cpp -o CMakeFiles/SingleApplication.dir/SingleApplication_autogen/mocs_compilation.cpp.s

third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/singleapplication.cpp.o: third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/flags.make
third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/singleapplication.cpp.o: /home/builder/packages/nheko/src/nheko-0.10.2/third_party/SingleApplication-3.3.2/singleapplication.cpp
third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/singleapplication.cpp.o: third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/builder/packages/nheko/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/singleapplication.cpp.o"
	cd /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/singleapplication.cpp.o -MF CMakeFiles/SingleApplication.dir/singleapplication.cpp.o.d -o CMakeFiles/SingleApplication.dir/singleapplication.cpp.o -c /home/builder/packages/nheko/src/nheko-0.10.2/third_party/SingleApplication-3.3.2/singleapplication.cpp

third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/singleapplication.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SingleApplication.dir/singleapplication.cpp.i"
	cd /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/builder/packages/nheko/src/nheko-0.10.2/third_party/SingleApplication-3.3.2/singleapplication.cpp > CMakeFiles/SingleApplication.dir/singleapplication.cpp.i

third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/singleapplication.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SingleApplication.dir/singleapplication.cpp.s"
	cd /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/builder/packages/nheko/src/nheko-0.10.2/third_party/SingleApplication-3.3.2/singleapplication.cpp -o CMakeFiles/SingleApplication.dir/singleapplication.cpp.s

third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/singleapplication_p.cpp.o: third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/flags.make
third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/singleapplication_p.cpp.o: /home/builder/packages/nheko/src/nheko-0.10.2/third_party/SingleApplication-3.3.2/singleapplication_p.cpp
third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/singleapplication_p.cpp.o: third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/builder/packages/nheko/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/singleapplication_p.cpp.o"
	cd /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/singleapplication_p.cpp.o -MF CMakeFiles/SingleApplication.dir/singleapplication_p.cpp.o.d -o CMakeFiles/SingleApplication.dir/singleapplication_p.cpp.o -c /home/builder/packages/nheko/src/nheko-0.10.2/third_party/SingleApplication-3.3.2/singleapplication_p.cpp

third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/singleapplication_p.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SingleApplication.dir/singleapplication_p.cpp.i"
	cd /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/builder/packages/nheko/src/nheko-0.10.2/third_party/SingleApplication-3.3.2/singleapplication_p.cpp > CMakeFiles/SingleApplication.dir/singleapplication_p.cpp.i

third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/singleapplication_p.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SingleApplication.dir/singleapplication_p.cpp.s"
	cd /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/builder/packages/nheko/src/nheko-0.10.2/third_party/SingleApplication-3.3.2/singleapplication_p.cpp -o CMakeFiles/SingleApplication.dir/singleapplication_p.cpp.s

# Object files for target SingleApplication
SingleApplication_OBJECTS = \
"CMakeFiles/SingleApplication.dir/SingleApplication_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/SingleApplication.dir/singleapplication.cpp.o" \
"CMakeFiles/SingleApplication.dir/singleapplication_p.cpp.o"

# External object files for target SingleApplication
SingleApplication_EXTERNAL_OBJECTS =

third_party/SingleApplication-3.3.2/libSingleApplication.a: third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/SingleApplication_autogen/mocs_compilation.cpp.o
third_party/SingleApplication-3.3.2/libSingleApplication.a: third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/singleapplication.cpp.o
third_party/SingleApplication-3.3.2/libSingleApplication.a: third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/singleapplication_p.cpp.o
third_party/SingleApplication-3.3.2/libSingleApplication.a: third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/build.make
third_party/SingleApplication-3.3.2/libSingleApplication.a: third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/builder/packages/nheko/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libSingleApplication.a"
	cd /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2 && $(CMAKE_COMMAND) -P CMakeFiles/SingleApplication.dir/cmake_clean_target.cmake
	cd /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SingleApplication.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/build: third_party/SingleApplication-3.3.2/libSingleApplication.a
.PHONY : third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/build

third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/clean:
	cd /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2 && $(CMAKE_COMMAND) -P CMakeFiles/SingleApplication.dir/cmake_clean.cmake
.PHONY : third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/clean

third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/depend:
	cd /home/builder/packages/nheko/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/builder/packages/nheko/src/nheko-0.10.2 /home/builder/packages/nheko/src/nheko-0.10.2/third_party/SingleApplication-3.3.2 /home/builder/packages/nheko/src/build /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2 /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication.dir/depend

