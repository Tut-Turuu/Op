
cmake_minimum_required(VERSION 3.16.3)

set(PROJECT_NAME cmake_test)
project("${PROJECT_NAME}")



set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXTENSIONS off) 
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

include_directories("inc/" "src/")

set(
    SOURCES
    main.cpp
    src/funcs.cpp
)

set(
    HEADERS
    inc/funcs.hpp
)

add_executable("${PROJECT_NAME}" ${SOURCES} ${HEADERS})  