# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Arthur\OneDrive - ufu.br\PERIODO 2 2021-2\ED1\LISTA 1\L1_E2_Arthur_Henrique"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Arthur\OneDrive - ufu.br\PERIODO 2 2021-2\ED1\LISTA 1\L1_E2_Arthur_Henrique\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/L1_E2_Arthur_Henrique.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/L1_E2_Arthur_Henrique.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/L1_E2_Arthur_Henrique.dir/flags.make

CMakeFiles/L1_E2_Arthur_Henrique.dir/main.c.obj: CMakeFiles/L1_E2_Arthur_Henrique.dir/flags.make
CMakeFiles/L1_E2_Arthur_Henrique.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Arthur\OneDrive - ufu.br\PERIODO 2 2021-2\ED1\LISTA 1\L1_E2_Arthur_Henrique\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/L1_E2_Arthur_Henrique.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\L1_E2_Arthur_Henrique.dir\main.c.obj -c "C:\Users\Arthur\OneDrive - ufu.br\PERIODO 2 2021-2\ED1\LISTA 1\L1_E2_Arthur_Henrique\main.c"

CMakeFiles/L1_E2_Arthur_Henrique.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/L1_E2_Arthur_Henrique.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Arthur\OneDrive - ufu.br\PERIODO 2 2021-2\ED1\LISTA 1\L1_E2_Arthur_Henrique\main.c" > CMakeFiles\L1_E2_Arthur_Henrique.dir\main.c.i

CMakeFiles/L1_E2_Arthur_Henrique.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/L1_E2_Arthur_Henrique.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Arthur\OneDrive - ufu.br\PERIODO 2 2021-2\ED1\LISTA 1\L1_E2_Arthur_Henrique\main.c" -o CMakeFiles\L1_E2_Arthur_Henrique.dir\main.c.s

# Object files for target L1_E2_Arthur_Henrique
L1_E2_Arthur_Henrique_OBJECTS = \
"CMakeFiles/L1_E2_Arthur_Henrique.dir/main.c.obj"

# External object files for target L1_E2_Arthur_Henrique
L1_E2_Arthur_Henrique_EXTERNAL_OBJECTS =

L1_E2_Arthur_Henrique.exe: CMakeFiles/L1_E2_Arthur_Henrique.dir/main.c.obj
L1_E2_Arthur_Henrique.exe: CMakeFiles/L1_E2_Arthur_Henrique.dir/build.make
L1_E2_Arthur_Henrique.exe: CMakeFiles/L1_E2_Arthur_Henrique.dir/linklibs.rsp
L1_E2_Arthur_Henrique.exe: CMakeFiles/L1_E2_Arthur_Henrique.dir/objects1.rsp
L1_E2_Arthur_Henrique.exe: CMakeFiles/L1_E2_Arthur_Henrique.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Arthur\OneDrive - ufu.br\PERIODO 2 2021-2\ED1\LISTA 1\L1_E2_Arthur_Henrique\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable L1_E2_Arthur_Henrique.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\L1_E2_Arthur_Henrique.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/L1_E2_Arthur_Henrique.dir/build: L1_E2_Arthur_Henrique.exe

.PHONY : CMakeFiles/L1_E2_Arthur_Henrique.dir/build

CMakeFiles/L1_E2_Arthur_Henrique.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\L1_E2_Arthur_Henrique.dir\cmake_clean.cmake
.PHONY : CMakeFiles/L1_E2_Arthur_Henrique.dir/clean

CMakeFiles/L1_E2_Arthur_Henrique.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Arthur\OneDrive - ufu.br\PERIODO 2 2021-2\ED1\LISTA 1\L1_E2_Arthur_Henrique" "C:\Users\Arthur\OneDrive - ufu.br\PERIODO 2 2021-2\ED1\LISTA 1\L1_E2_Arthur_Henrique" "C:\Users\Arthur\OneDrive - ufu.br\PERIODO 2 2021-2\ED1\LISTA 1\L1_E2_Arthur_Henrique\cmake-build-debug" "C:\Users\Arthur\OneDrive - ufu.br\PERIODO 2 2021-2\ED1\LISTA 1\L1_E2_Arthur_Henrique\cmake-build-debug" "C:\Users\Arthur\OneDrive - ufu.br\PERIODO 2 2021-2\ED1\LISTA 1\L1_E2_Arthur_Henrique\cmake-build-debug\CMakeFiles\L1_E2_Arthur_Henrique.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/L1_E2_Arthur_Henrique.dir/depend

