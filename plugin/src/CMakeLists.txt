# set minimum cmake version                                                                                                                                            
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(plugin LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

# build plugins
add_subdirectory(dictionaries)

# build client 
set(SRC_LIST client.cpp)
if (WIN32)
    list(APPEND SRC_LIST dictionary_manager_win32.cpp)
else()
    list(APPEND SRC_LIST dictionary_manager_linux.cpp)
endif()

add_executable(client ${SRC_LIST})

if (WIN32)
else()
    target_link_libraries(client dl)
endif()
