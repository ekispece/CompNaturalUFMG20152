# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_SOURCE_DIR = /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/build

# Include any dependencies generated for this target.
include CMakeFiles/TP1GeneticProgramming.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TP1GeneticProgramming.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TP1GeneticProgramming.dir/flags.make

CMakeFiles/TP1GeneticProgramming.dir/main.cpp.o: CMakeFiles/TP1GeneticProgramming.dir/flags.make
CMakeFiles/TP1GeneticProgramming.dir/main.cpp.o: ../main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/TP1GeneticProgramming.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/TP1GeneticProgramming.dir/main.cpp.o -c /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/main.cpp

CMakeFiles/TP1GeneticProgramming.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TP1GeneticProgramming.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/main.cpp > CMakeFiles/TP1GeneticProgramming.dir/main.cpp.i

CMakeFiles/TP1GeneticProgramming.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TP1GeneticProgramming.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/main.cpp -o CMakeFiles/TP1GeneticProgramming.dir/main.cpp.s

CMakeFiles/TP1GeneticProgramming.dir/main.cpp.o.requires:
.PHONY : CMakeFiles/TP1GeneticProgramming.dir/main.cpp.o.requires

CMakeFiles/TP1GeneticProgramming.dir/main.cpp.o.provides: CMakeFiles/TP1GeneticProgramming.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/TP1GeneticProgramming.dir/build.make CMakeFiles/TP1GeneticProgramming.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/TP1GeneticProgramming.dir/main.cpp.o.provides

CMakeFiles/TP1GeneticProgramming.dir/main.cpp.o.provides.build: CMakeFiles/TP1GeneticProgramming.dir/main.cpp.o

CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.o: CMakeFiles/TP1GeneticProgramming.dir/flags.make
CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.o: ../Population.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.o -c /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/Population.cpp

CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/Population.cpp > CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.i

CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/Population.cpp -o CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.s

CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.o.requires:
.PHONY : CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.o.requires

CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.o.provides: CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.o.requires
	$(MAKE) -f CMakeFiles/TP1GeneticProgramming.dir/build.make CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.o.provides.build
.PHONY : CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.o.provides

CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.o.provides.build: CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.o

CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.o: CMakeFiles/TP1GeneticProgramming.dir/flags.make
CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.o: ../Operators.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.o -c /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/Operators.cpp

CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/Operators.cpp > CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.i

CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/Operators.cpp -o CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.s

CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.o.requires:
.PHONY : CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.o.requires

CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.o.provides: CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.o.requires
	$(MAKE) -f CMakeFiles/TP1GeneticProgramming.dir/build.make CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.o.provides.build
.PHONY : CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.o.provides

CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.o.provides.build: CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.o

CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.o: CMakeFiles/TP1GeneticProgramming.dir/flags.make
CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.o: ../Terminals.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.o -c /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/Terminals.cpp

CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/Terminals.cpp > CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.i

CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/Terminals.cpp -o CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.s

CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.o.requires:
.PHONY : CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.o.requires

CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.o.provides: CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.o.requires
	$(MAKE) -f CMakeFiles/TP1GeneticProgramming.dir/build.make CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.o.provides.build
.PHONY : CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.o.provides

CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.o.provides.build: CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.o

# Object files for target TP1GeneticProgramming
TP1GeneticProgramming_OBJECTS = \
"CMakeFiles/TP1GeneticProgramming.dir/main.cpp.o" \
"CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.o" \
"CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.o" \
"CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.o"

# External object files for target TP1GeneticProgramming
TP1GeneticProgramming_EXTERNAL_OBJECTS =

TP1GeneticProgramming: CMakeFiles/TP1GeneticProgramming.dir/main.cpp.o
TP1GeneticProgramming: CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.o
TP1GeneticProgramming: CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.o
TP1GeneticProgramming: CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.o
TP1GeneticProgramming: CMakeFiles/TP1GeneticProgramming.dir/build.make
TP1GeneticProgramming: CMakeFiles/TP1GeneticProgramming.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable TP1GeneticProgramming"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TP1GeneticProgramming.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TP1GeneticProgramming.dir/build: TP1GeneticProgramming
.PHONY : CMakeFiles/TP1GeneticProgramming.dir/build

CMakeFiles/TP1GeneticProgramming.dir/requires: CMakeFiles/TP1GeneticProgramming.dir/main.cpp.o.requires
CMakeFiles/TP1GeneticProgramming.dir/requires: CMakeFiles/TP1GeneticProgramming.dir/Population.cpp.o.requires
CMakeFiles/TP1GeneticProgramming.dir/requires: CMakeFiles/TP1GeneticProgramming.dir/Operators.cpp.o.requires
CMakeFiles/TP1GeneticProgramming.dir/requires: CMakeFiles/TP1GeneticProgramming.dir/Terminals.cpp.o.requires
.PHONY : CMakeFiles/TP1GeneticProgramming.dir/requires

CMakeFiles/TP1GeneticProgramming.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TP1GeneticProgramming.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TP1GeneticProgramming.dir/clean

CMakeFiles/TP1GeneticProgramming.dir/depend:
	cd /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1 /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1 /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/build /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/build /home/sergio/Copy/UFMG/Graduacao/2015_2/ComputacaoNatural/TP1/build/CMakeFiles/TP1GeneticProgramming.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TP1GeneticProgramming.dir/depend
