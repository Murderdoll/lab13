cmake_minimum_required(VERSION 3.2.2)


set(CMAKE_CXX_COMPILER "g++")
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(cmake/HunterGate.cmake)

HunterGate(
    URL "https://github.com/ruslo/hunter/archive/v0.19.169.tar.gz"
    SHA1 "15c719a00df4e4506e1b552e25d6027d6ba61fbb"
)

project(pack)
hunter_add_package(nlohmann_json)
find_package(nlohmann_json CONFIG REQUIRED)

add_executable(pack ${CMAKE_CURRENT_SOURCE_DIR}/sources/pack.cpp)
target_link_libraries(pack nlohmann_json)
add_executable(unpack ${CMAKE_CURRENT_SOURCE_DIR}/sources/unpack.cpp)
target_link_libraries(unpack nlohmann_json)
