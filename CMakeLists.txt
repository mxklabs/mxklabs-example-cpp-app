cmake_minimum_required (VERSION 2.8)
project (example_cpp_app)

#version number
set (example_cpp_app_VERSION_MAJOR 1)
set (example_cpp_app_VERSION_MINOR 0)

#find dependencies
#find_package(cppzmq REQUIRED)


#include the subdirectory containing our libs
#add_subdirectory(src)
include_directories(include)

set(SOURCES
  src/main.cpp
  src/example_cpp_app/foo.cpp)

#indicate the entry point for the executable
add_executable(example_cpp_app ${SOURCES})

# Indicate which libraries to include during the link process.
#target_link_libraries (example_cpp_app Hello)

install (TARGETS example_cpp_app DESTINATION bin)
