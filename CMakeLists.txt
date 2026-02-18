cmake_minimum_required(VERSION 3.14)
project(CPP_AUTOGRADED LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

# -------------------------
# GoogleTest (once, here)
# -------------------------
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

# -------------------------
# Student code library
# -------------------------
add_library(student_code
        src/student_code.cpp
)

target_include_directories(student_code PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)

# -------------------------
# Tests
# -------------------------
add_subdirectory(tests)
