cmake_minimum_required(VERSION 4.0)
project(hello LANGUAGES CXX)

add_executable(hello)
target_sources(hello PRIVATE src/hello.cpp)

add_executable(areas)
target_sources(areas PRIVATE src/areas/geom.cpp src/areas/main.cpp)

add_executable(numbers)
target_sources(numbers PRIVATE src/numbers/main.cpp)