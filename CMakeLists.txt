cmake_minimum_required(VERSION 3.28)
project(TrussSolver VERSION 0.0.1 LANGUAGES CXX)
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake/Modules")

# Clang integration
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include(NoInSourceBuilds)

# C++ configuration
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)  # make the code vendor agnostic


add_subdirectory(src bin)
add_subdirectory(tests)

# Executable name
set(EXE_NAME TrussSolver)

