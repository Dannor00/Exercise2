cmake_minimum_required(VERSION 3.15)
project(exercise2)

set(CMAKE_CXX_STANDARD 17)

# Lag et executable kalt exercise1, basert på src/main.cpp
add_executable(exercise2 main.cpp)

# Legg til include-mappa
target_include_directories(exercise2 PUBLIC include)
