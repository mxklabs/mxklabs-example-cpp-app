cmake_minimum_required (VERSION 2.8)
cmake_policy(SET CMP0048 NEW)
project (example_cpp_app VERSION 1.0.0)

# Use CMAKE_INSTALL_*DIR variables.
include(GNUInstallDirs)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_EXTENSIONS OFF)

# Add include directories.
include_directories(include)

# Find sources and headers.
file(GLOB_RECURSE EXAMPLE_CPP_APP_SOURCE_FILES "src/*.cpp" "src/*.hpp*")
file(GLOB_RECURSE EXAMPLE_CPP_APP_HEADER_FILES "include/*.hpp*")

#indicate the entry point for the executable
add_executable(${PROJECT_NAME} ${EXAMPLE_CPP_APP_HEADER_FILES} ${EXAMPLE_CPP_APP_SOURCE_FILES})

# Indicate which libraries to include during the link process.
#target_link_libraries (example_cpp_app Hello)

install (TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_BINDIR})
