cmake_minimum_required(VERSION 3.5)

add_library(module3 SHARED src/file00.c src/file01.c)

set_target_properties(module3 PROPERTIES
                VERSION ${PROJECT_VERSION}
                SOVERSION 1)

target_include_directories(module3 PUBLIC include)
target_include_directories(module3 PRIVATE src)

install(TARGETS module3
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

install(DIRECTORY "${CMAKE_SOURCE_DIR}/module3/include/proj_name"
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
