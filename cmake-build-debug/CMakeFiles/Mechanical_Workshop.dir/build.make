# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /home/crimsonpurgatory/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/crimsonpurgatory/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5457.51/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/crimsonpurgatory/Documentos/Proyectos_paga/Mechanical-Workshop

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/crimsonpurgatory/Documentos/Proyectos_paga/Mechanical-Workshop/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Mechanical_Workshop.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Mechanical_Workshop.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Mechanical_Workshop.dir/flags.make

CMakeFiles/Mechanical_Workshop.dir/main.c.o: CMakeFiles/Mechanical_Workshop.dir/flags.make
CMakeFiles/Mechanical_Workshop.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/crimsonpurgatory/Documentos/Proyectos_paga/Mechanical-Workshop/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Mechanical_Workshop.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Mechanical_Workshop.dir/main.c.o -c /home/crimsonpurgatory/Documentos/Proyectos_paga/Mechanical-Workshop/main.c

CMakeFiles/Mechanical_Workshop.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Mechanical_Workshop.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/crimsonpurgatory/Documentos/Proyectos_paga/Mechanical-Workshop/main.c > CMakeFiles/Mechanical_Workshop.dir/main.c.i

CMakeFiles/Mechanical_Workshop.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Mechanical_Workshop.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/crimsonpurgatory/Documentos/Proyectos_paga/Mechanical-Workshop/main.c -o CMakeFiles/Mechanical_Workshop.dir/main.c.s

# Object files for target Mechanical_Workshop
Mechanical_Workshop_OBJECTS = \
"CMakeFiles/Mechanical_Workshop.dir/main.c.o"

# External object files for target Mechanical_Workshop
Mechanical_Workshop_EXTERNAL_OBJECTS =

Mechanical_Workshop: CMakeFiles/Mechanical_Workshop.dir/main.c.o
Mechanical_Workshop: CMakeFiles/Mechanical_Workshop.dir/build.make
Mechanical_Workshop: CMakeFiles/Mechanical_Workshop.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/crimsonpurgatory/Documentos/Proyectos_paga/Mechanical-Workshop/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Mechanical_Workshop"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Mechanical_Workshop.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Mechanical_Workshop.dir/build: Mechanical_Workshop
.PHONY : CMakeFiles/Mechanical_Workshop.dir/build

CMakeFiles/Mechanical_Workshop.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Mechanical_Workshop.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Mechanical_Workshop.dir/clean

CMakeFiles/Mechanical_Workshop.dir/depend:
	cd /home/crimsonpurgatory/Documentos/Proyectos_paga/Mechanical-Workshop/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/crimsonpurgatory/Documentos/Proyectos_paga/Mechanical-Workshop /home/crimsonpurgatory/Documentos/Proyectos_paga/Mechanical-Workshop /home/crimsonpurgatory/Documentos/Proyectos_paga/Mechanical-Workshop/cmake-build-debug /home/crimsonpurgatory/Documentos/Proyectos_paga/Mechanical-Workshop/cmake-build-debug /home/crimsonpurgatory/Documentos/Proyectos_paga/Mechanical-Workshop/cmake-build-debug/CMakeFiles/Mechanical_Workshop.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Mechanical_Workshop.dir/depend

