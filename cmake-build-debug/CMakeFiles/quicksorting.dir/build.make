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
include CMakeFiles/quicksorting.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/quicksorting.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/quicksorting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/quicksorting.dir/flags.make

CMakeFiles/quicksorting.dir/oridnamento/quick_sorting.c.obj: CMakeFiles/quicksorting.dir/flags.make
CMakeFiles/quicksorting.dir/oridnamento/quick_sorting.c.obj: C:/Users/David/Documents/Uni/IA/C/oridnamento/quick_sorting.c
CMakeFiles/quicksorting.dir/oridnamento/quick_sorting.c.obj: CMakeFiles/quicksorting.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\David\Documents\Uni\IA\C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/quicksorting.dir/oridnamento/quick_sorting.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/quicksorting.dir/oridnamento/quick_sorting.c.obj -MF CMakeFiles\quicksorting.dir\oridnamento\quick_sorting.c.obj.d -o CMakeFiles\quicksorting.dir\oridnamento\quick_sorting.c.obj -c C:\Users\David\Documents\Uni\IA\C\oridnamento\quick_sorting.c

CMakeFiles/quicksorting.dir/oridnamento/quick_sorting.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/quicksorting.dir/oridnamento/quick_sorting.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\David\Documents\Uni\IA\C\oridnamento\quick_sorting.c > CMakeFiles\quicksorting.dir\oridnamento\quick_sorting.c.i

CMakeFiles/quicksorting.dir/oridnamento/quick_sorting.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/quicksorting.dir/oridnamento/quick_sorting.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\David\Documents\Uni\IA\C\oridnamento\quick_sorting.c -o CMakeFiles\quicksorting.dir\oridnamento\quick_sorting.c.s

# Object files for target quicksorting
quicksorting_OBJECTS = \
"CMakeFiles/quicksorting.dir/oridnamento/quick_sorting.c.obj"

# External object files for target quicksorting
quicksorting_EXTERNAL_OBJECTS =

quicksorting.exe: CMakeFiles/quicksorting.dir/oridnamento/quick_sorting.c.obj
quicksorting.exe: CMakeFiles/quicksorting.dir/build.make
quicksorting.exe: CMakeFiles/quicksorting.dir/linkLibs.rsp
quicksorting.exe: CMakeFiles/quicksorting.dir/objects1.rsp
quicksorting.exe: CMakeFiles/quicksorting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\David\Documents\Uni\IA\C\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable quicksorting.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\quicksorting.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/quicksorting.dir/build: quicksorting.exe
.PHONY : CMakeFiles/quicksorting.dir/build

CMakeFiles/quicksorting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\quicksorting.dir\cmake_clean.cmake
.PHONY : CMakeFiles/quicksorting.dir/clean

CMakeFiles/quicksorting.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\David\Documents\Uni\IA\C C:\Users\David\Documents\Uni\IA\C C:\Users\David\Documents\Uni\IA\C\cmake-build-debug C:\Users\David\Documents\Uni\IA\C\cmake-build-debug C:\Users\David\Documents\Uni\IA\C\cmake-build-debug\CMakeFiles\quicksorting.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/quicksorting.dir/depend
