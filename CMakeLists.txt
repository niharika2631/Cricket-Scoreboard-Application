
cmake_minimum_required(VERSION 3.16)

project(CricketMatchScoreboard)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Header files
include_directories(include)

# Source files
add_executable(scoreboard
    src/main.cpp
    src/player.cpp
    src/batsman.cpp
    src/bowler.cpp
    src/team.cpp
    src/scoreboard.cpp
    src/extras.cpp
    src/match.cpp
)
