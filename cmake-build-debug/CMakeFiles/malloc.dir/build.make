# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\David\Documents\Uni\IA\C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\David\Documents\Uni\IA\C\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/malloc.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/malloc.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/malloc.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/malloc.dir/flags.make

CMakeFiles/malloc.dir/puntatori/malloc.c.obj: CMakeFiles/malloc.dir/flags.make
CMakeFiles/malloc.dir/puntatori/malloc.c.obj: C:/Users/David/Documents/Uni/IA/C/puntatori/malloc.c
CMakeFiles/malloc.dir/puntatori/malloc.c.obj: CMakeFiles/malloc.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\David\Documents\Uni\IA\C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/malloc.dir/puntatori/malloc.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/malloc.dir/puntatori/malloc.c.obj -MF CMakeFiles\malloc.dir\puntatori\malloc.c.obj.d -o CMakeFiles\malloc.dir\puntatori\malloc.c.obj -c C:\Users\David\Documents\Uni\IA\C\puntatori\malloc.c

CMakeFiles/malloc.dir/puntatori/malloc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/malloc.dir/puntatori/malloc.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\David\Documents\Uni\IA\C\puntatori\malloc.c > CMakeFiles\malloc.dir\puntatori\malloc.c.i

CMakeFiles/malloc.dir/puntatori/malloc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/malloc.dir/puntatori/malloc.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\David\Documents\Uni\IA\C\puntatori\malloc.c -o CMakeFiles\malloc.dir\puntatori\malloc.c.s

# Object files for target malloc
malloc_OBJECTS = \
"CMakeFiles/malloc.dir/puntatori/malloc.c.obj"

# External object files for target malloc
malloc_EXTERNAL_OBJECTS =

malloc.exe: CMakeFiles/malloc.dir/puntatori/malloc.c.obj
malloc.exe: CMakeFiles/malloc.dir/build.make
malloc.exe: CMakeFiles/malloc.dir/linkLibs.rsp
malloc.exe: CMakeFiles/malloc.dir/objects1.rsp
malloc.exe: CMakeFiles/malloc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\David\Documents\Uni\IA\C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable malloc.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\malloc.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/malloc.dir/build: malloc.exe
.PHONY : CMakeFiles/malloc.dir/build

CMakeFiles/malloc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\malloc.dir\cmake_clean.cmake
.PHONY : CMakeFiles/malloc.dir/clean

CMakeFiles/malloc.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\David\Documents\Uni\IA\C C:\Users\David\Documents\Uni\IA\C C:\Users\David\Documents\Uni\IA\C\cmake-build-debug C:\Users\David\Documents\Uni\IA\C\cmake-build-debug C:\Users\David\Documents\Uni\IA\C\cmake-build-debug\CMakeFiles\malloc.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/malloc.dir/depend

