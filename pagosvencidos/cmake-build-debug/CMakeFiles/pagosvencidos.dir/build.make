# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Public\pagosvencidos

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Public\pagosvencidos\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pagosvencidos.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pagosvencidos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pagosvencidos.dir/flags.make

CMakeFiles/pagosvencidos.dir/main.cpp.obj: CMakeFiles/pagosvencidos.dir/flags.make
CMakeFiles/pagosvencidos.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Public\pagosvencidos\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pagosvencidos.dir/main.cpp.obj"
	C:\Users\migue\OneDrive\Documentos\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\pagosvencidos.dir\main.cpp.obj -c C:\Users\Public\pagosvencidos\main.cpp

CMakeFiles/pagosvencidos.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pagosvencidos.dir/main.cpp.i"
	C:\Users\migue\OneDrive\Documentos\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Public\pagosvencidos\main.cpp > CMakeFiles\pagosvencidos.dir\main.cpp.i

CMakeFiles/pagosvencidos.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pagosvencidos.dir/main.cpp.s"
	C:\Users\migue\OneDrive\Documentos\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Public\pagosvencidos\main.cpp -o CMakeFiles\pagosvencidos.dir\main.cpp.s

# Object files for target pagosvencidos
pagosvencidos_OBJECTS = \
"CMakeFiles/pagosvencidos.dir/main.cpp.obj"

# External object files for target pagosvencidos
pagosvencidos_EXTERNAL_OBJECTS =

pagosvencidos.exe: CMakeFiles/pagosvencidos.dir/main.cpp.obj
pagosvencidos.exe: CMakeFiles/pagosvencidos.dir/build.make
pagosvencidos.exe: CMakeFiles/pagosvencidos.dir/linklibs.rsp
pagosvencidos.exe: CMakeFiles/pagosvencidos.dir/objects1.rsp
pagosvencidos.exe: CMakeFiles/pagosvencidos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Public\pagosvencidos\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pagosvencidos.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pagosvencidos.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pagosvencidos.dir/build: pagosvencidos.exe

.PHONY : CMakeFiles/pagosvencidos.dir/build

CMakeFiles/pagosvencidos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pagosvencidos.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pagosvencidos.dir/clean

CMakeFiles/pagosvencidos.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Public\pagosvencidos C:\Users\Public\pagosvencidos C:\Users\Public\pagosvencidos\cmake-build-debug C:\Users\Public\pagosvencidos\cmake-build-debug C:\Users\Public\pagosvencidos\cmake-build-debug\CMakeFiles\pagosvencidos.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pagosvencidos.dir/depend

