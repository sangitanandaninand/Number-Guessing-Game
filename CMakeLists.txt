cmake_minimum_required(VERSION 3.10)
project(NumberGuessingGame)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create a library from Game.cpp
add_library(GameLib src/Game.cpp)

# Add the include directory for Game.h
target_include_directories(GameLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

# Create an executable from main.cpp
add_executable(NumberGuessingGame src/main.cpp)

# Link the library to the executable
target_link_libraries(NumberGuessingGame PRIVATE GameLib)

# Enable testing
enable_testing()

# Create a test executable
add_executable(test_main tests/test_main.cpp)

# Link the library to the test executable
target_link_libraries(test_main PRIVATE GameLib)

# Register the test
add_test(NAME FeatureTests COMMAND test_main)
