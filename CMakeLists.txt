cmake_minimum_required(VERSION 3.12)
project(ChessCpp)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)

# Add the source files
set(SOURCE_FILES
    src/ChessBoard.cpp
    src/Square.cpp
    src/main.cpp
)

# Add the executable
add_executable(main.out ${SOURCE_FILES})

# Optionally, you can set the output directory for the executable
set_target_properties(main.out PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin"
)
