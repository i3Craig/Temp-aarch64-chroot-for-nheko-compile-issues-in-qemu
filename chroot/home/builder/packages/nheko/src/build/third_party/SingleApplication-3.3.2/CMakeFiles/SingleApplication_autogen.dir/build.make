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

# Utility rule file for SingleApplication_autogen.

# Include any custom commands dependencies for this target.
include third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication_autogen.dir/progress.make

third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/builder/packages/nheko/src/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC for target SingleApplication"
	cd /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2 && /usr/bin/cmake -E cmake_autogen /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication_autogen.dir/AutogenInfo.json None

SingleApplication_autogen: third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication_autogen
SingleApplication_autogen: third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication_autogen.dir/build.make
.PHONY : SingleApplication_autogen

# Rule to build all files generated by this target.
third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication_autogen.dir/build: SingleApplication_autogen
.PHONY : third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication_autogen.dir/build

third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication_autogen.dir/clean:
	cd /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2 && $(CMAKE_COMMAND) -P CMakeFiles/SingleApplication_autogen.dir/cmake_clean.cmake
.PHONY : third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication_autogen.dir/clean

third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication_autogen.dir/depend:
	cd /home/builder/packages/nheko/src/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/builder/packages/nheko/src/nheko-0.10.2 /home/builder/packages/nheko/src/nheko-0.10.2/third_party/SingleApplication-3.3.2 /home/builder/packages/nheko/src/build /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2 /home/builder/packages/nheko/src/build/third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : third_party/SingleApplication-3.3.2/CMakeFiles/SingleApplication_autogen.dir/depend

