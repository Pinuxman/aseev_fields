# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_SOURCE_DIR = /mnt/c/Users/PW0/aseev_fields

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/PW0/aseev_fields/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/aseev_fields.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/aseev_fields.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/aseev_fields.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/aseev_fields.dir/flags.make

CMakeFiles/aseev_fields.dir/main.c.o: CMakeFiles/aseev_fields.dir/flags.make
CMakeFiles/aseev_fields.dir/main.c.o: /mnt/c/Users/PW0/aseev_fields/main.c
CMakeFiles/aseev_fields.dir/main.c.o: CMakeFiles/aseev_fields.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/PW0/aseev_fields/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/aseev_fields.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/aseev_fields.dir/main.c.o -MF CMakeFiles/aseev_fields.dir/main.c.o.d -o CMakeFiles/aseev_fields.dir/main.c.o -c /mnt/c/Users/PW0/aseev_fields/main.c

CMakeFiles/aseev_fields.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/aseev_fields.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /mnt/c/Users/PW0/aseev_fields/main.c > CMakeFiles/aseev_fields.dir/main.c.i

CMakeFiles/aseev_fields.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/aseev_fields.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /mnt/c/Users/PW0/aseev_fields/main.c -o CMakeFiles/aseev_fields.dir/main.c.s

# Object files for target aseev_fields
aseev_fields_OBJECTS = \
"CMakeFiles/aseev_fields.dir/main.c.o"

# External object files for target aseev_fields
aseev_fields_EXTERNAL_OBJECTS =

aseev_fields: CMakeFiles/aseev_fields.dir/main.c.o
aseev_fields: CMakeFiles/aseev_fields.dir/build.make
aseev_fields: CMakeFiles/aseev_fields.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/PW0/aseev_fields/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable aseev_fields"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/aseev_fields.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/aseev_fields.dir/build: aseev_fields
.PHONY : CMakeFiles/aseev_fields.dir/build

CMakeFiles/aseev_fields.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/aseev_fields.dir/cmake_clean.cmake
.PHONY : CMakeFiles/aseev_fields.dir/clean

CMakeFiles/aseev_fields.dir/depend:
	cd /mnt/c/Users/PW0/aseev_fields/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/PW0/aseev_fields /mnt/c/Users/PW0/aseev_fields /mnt/c/Users/PW0/aseev_fields/cmake-build-debug /mnt/c/Users/PW0/aseev_fields/cmake-build-debug /mnt/c/Users/PW0/aseev_fields/cmake-build-debug/CMakeFiles/aseev_fields.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/aseev_fields.dir/depend
