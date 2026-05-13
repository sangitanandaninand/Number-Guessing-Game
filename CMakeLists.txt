cmake_minimum_required(VERSION 3.10)
project(NumberGuessingGame)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# -------------------------
# Main game library
# -------------------------
add_library(GameLib
    src/Game.cpp
    src/Leaderboard.cpp
    src/Player.cpp
)

target_include_directories(GameLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src)

# -------------------------
# Main executable
# -------------------------
add_executable(NumberGuessingGame src/main.cpp)

target_link_libraries(NumberGuessingGame PRIVATE GameLib)

# -------------------------
# Testing setup
# -------------------------
enable_testing()

add_executable(test_main
    tests/test_main.cpp
)

target_link_libraries(test_main PRIVATE GameLib)

add_test(NAME FeatureTests COMMAND test_main)
