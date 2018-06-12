cmake_minimum_required(VERSION 3.5)
project(unit_test_demo)


# Configure a library that contains all C modules
set(HEADERS
    A.h)

set(SOURCES 
    A.c)

add_library(my_lib ${HEADERS} ${SOURCES})
set_target_properties(my_lib PROPERTIES LINKER_LANGUAGE C)


# Configure the executable that links in my_lib
add_executable(runMain main.c)
target_link_libraries(runMain my_lib)