# THIS FILE IS NOT USED AND IS LEFT HERE FOR ARCHIVE REASONS

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
