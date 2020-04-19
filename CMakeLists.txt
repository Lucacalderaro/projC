cmake_minimum_required(VERSION 3.16)

project(projC LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include(FetchContent)
FetchContent_Declare(
  projD
  GIT_REPOSITORY https://github.com/Lucacalderaro/projD.git
  GIT_TAG        33e52df37072dd8b6a38527ff355d3b34a8c75fa
)

FetchContent_MakeAvailable(projD)

add_subdirectory(src)
add_subdirectory(app)
