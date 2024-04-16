# Define the compiler
# cmake settings:

cmake_minimum_required(VERSION 3.29.1)
project(busterz)

# change path from /src to desired
file(GLOB_RECURSE sources
	"${CMAKE_SOURCE_DIR}/src/*.c"
	"${CMAKE_SOURCE_DIR}/src/*.cpp"
	)

# add precompiler definitions like:
# add_definitions(-DSOME_DEFINITION)
# add_executable(my_app ${sources})

# add_include_directories(my_app PUBLIC "{CMAKE_SOURCE_DIR}/include")

# if you have recompiled headers, add them like this:
# target_precompiled_headers(my_app PRIVATE "${CMAKE_SOURCE_DIR}/src/pch.h")
# target_precompiled_heders(my_app PRIVATE "${CMAKE_SOURCE_DIR}/lib/")



# clang++ settings:
# COMPILER = cmake

# Define compiler options and flags

# -std=c++21: Use the C++21 standard

# -Ilib/: Add the 'lib' directory to the include path
# -Llib/: Add the 'lib' directory to the library search path

# -framework: Link with macOS frameworks
# OSX_OPT = -std=c++21 -Ilib/ -Llib/ -framework CoreVideo -framework IOKit -framework Cocoa -framework GLUT -framework OpenGL

# Define the source files wildcard pattern
# CFILES = $(wildcard $(SRC_DIR)/*.cpp)

# Define the source files directory
# SRC_DIR = src

# Define the build target for macOS
# build_osx: $(CFILES)
#     $(COMPILER) $(OSX_OPT) $^ -o $(OSX_OUT)

# Define the output executable file
# OSX_OUT = my_executable

# Define a clean target to remove built files
# clean:
#     rm -f $(OSX_OUT)
