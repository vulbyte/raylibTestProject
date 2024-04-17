# # CMake settings:

cmake_minimum_required(VERSION 3.29.1)
project(busterz)

# change path from /src to desired
file(GLOB_RECURSE sources
	"${CMAKE_SOURCE_DIR}/src/*.c"
	"${CMAKE_SOURCE_DIR}/src/*.cpp"
	)

project(busterz VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED False) # No dependent version yet*

# # Configure_file(./utils/versioningconfig.h.in versioning.h)
# # target_include_directories(busterz PUBLIC "${CMAKE_SOURCE_DIR}/")
# 
add_executable(busterz ./src/main.cpp)
# 
include_directories("${CMAKE_SOURCE_DIR}/lib")
include_directories("${CMAKE_SOURCE_DIR}/utils")

set(SOURCES ./lib/raylib.h ./lib/raymath.h)
 
# target_link_libraries(${PROJECT_NAME} PUBLIC ./lib/)
# 
# # Change path from /src to desired
# file(GLOB_RECURSE sources
#     "${CMAKE_SOURCE_DIR}/src/*.c"
#     "${CMAKE_SOURCE_DIR}/src/*.cpp"
#     "${CMAKE_SOURCE_DIR}/utils/*.c"
#     "${CMAKE_SOURCE_DIR}/utils/*.cpp"
# )
# 
# # Name
# # set_target_properties(busterz PROPERTIES OUTPUT_NAME "busterz_compile")
# 
# # Add precompiler definitions like:
# # add_definitions(-DSOME_DEFINITION)
# # add_executable(my_app ${sources})
# 
# # Add_include_directories(my_app PUBLIC "${CMAKE_SOURCE_DIR}/include")
# 
# # If you have precompiled headers, add them like this:
# # target_precompiled_headers(my_app PRIVATE "${CMAKE_SOURCE_DIR}/src/pch.h")
# # target_precompiled_headers(my_app PRIVATE "${CMAKE_SOURCE_DIR}/lib/")
# 
# # Used for version updating
# 
# # add_executable(versioning.cpp)
# 
