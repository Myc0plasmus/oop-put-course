cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(project)


find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_executable(main main.cpp ${SRC_FILES})
target_link_libraries(main ${CURSES_LIBRARIES})
target_include_directories(main PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)


