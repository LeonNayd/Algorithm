# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\CLionProject\Algorithm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\CLionProject\Algorithm\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\Algorithm.dir\depend.make
# Include the progress variables for this target.
include CMakeFiles\Algorithm.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\Algorithm.dir\flags.make

CMakeFiles\Algorithm.dir\main.cpp.obj: CMakeFiles\Algorithm.dir\flags.make
CMakeFiles\Algorithm.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProject\Algorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Algorithm.dir/main.cpp.obj"
	"D:\Microsoft\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Algorithm.dir\main.cpp.obj /FdCMakeFiles\Algorithm.dir\ /FS -c D:\CLionProject\Algorithm\main.cpp
<<

CMakeFiles\Algorithm.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Algorithm.dir/main.cpp.i"
	"D:\Microsoft\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" > CMakeFiles\Algorithm.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLionProject\Algorithm\main.cpp
<<

CMakeFiles\Algorithm.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Algorithm.dir/main.cpp.s"
	"D:\Microsoft\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Algorithm.dir\main.cpp.s /c D:\CLionProject\Algorithm\main.cpp
<<

CMakeFiles\Algorithm.dir\List.cpp.obj: CMakeFiles\Algorithm.dir\flags.make
CMakeFiles\Algorithm.dir\List.cpp.obj: ..\List.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\CLionProject\Algorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Algorithm.dir/List.cpp.obj"
	"D:\Microsoft\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\Algorithm.dir\List.cpp.obj /FdCMakeFiles\Algorithm.dir\ /FS -c D:\CLionProject\Algorithm\List.cpp
<<

CMakeFiles\Algorithm.dir\List.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Algorithm.dir/List.cpp.i"
	"D:\Microsoft\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" > CMakeFiles\Algorithm.dir\List.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\CLionProject\Algorithm\List.cpp
<<

CMakeFiles\Algorithm.dir\List.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Algorithm.dir/List.cpp.s"
	"D:\Microsoft\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\cl.exe" @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\Algorithm.dir\List.cpp.s /c D:\CLionProject\Algorithm\List.cpp
<<

# Object files for target Algorithm
Algorithm_OBJECTS = \
"CMakeFiles\Algorithm.dir\main.cpp.obj" \
"CMakeFiles\Algorithm.dir\List.cpp.obj"

# External object files for target Algorithm
Algorithm_EXTERNAL_OBJECTS =

Algorithm.exe: CMakeFiles\Algorithm.dir\main.cpp.obj
Algorithm.exe: CMakeFiles\Algorithm.dir\List.cpp.obj
Algorithm.exe: CMakeFiles\Algorithm.dir\build.make
Algorithm.exe: CMakeFiles\Algorithm.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\CLionProject\Algorithm\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Algorithm.exe"
	"D:\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\Algorithm.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100190~1.0\x86\mt.exe --manifests -- "D:\Microsoft\Microsoft Visual Studio\2019\Community\VC\Tools\MSVC\14.29.30133\bin\Hostx86\x86\link.exe" /nologo @CMakeFiles\Algorithm.dir\objects1.rsp @<<
 /out:Algorithm.exe /implib:Algorithm.lib /pdb:D:\CLionProject\Algorithm\cmake-build-debug\Algorithm.pdb /version:0.0 /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\Algorithm.dir\build: Algorithm.exe
.PHONY : CMakeFiles\Algorithm.dir\build

CMakeFiles\Algorithm.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Algorithm.dir\cmake_clean.cmake
.PHONY : CMakeFiles\Algorithm.dir\clean

CMakeFiles\Algorithm.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" D:\CLionProject\Algorithm D:\CLionProject\Algorithm D:\CLionProject\Algorithm\cmake-build-debug D:\CLionProject\Algorithm\cmake-build-debug D:\CLionProject\Algorithm\cmake-build-debug\CMakeFiles\Algorithm.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\Algorithm.dir\depend

