cmake_minimum_required(VERSION 3.5)

project(proj_name VERSION 1.0.0)

include(GNUInstallDirs)

add_subdirectory(module1)
add_subdirectory(module2)
add_subdirectory(module3)

add_library(proj_name SHARED
	module1/src/file00.c module1/src/file01.c
	module2/src/file00.c module2/src/file01.c
	module3/src/file00.c module3/src/file01.c)

set_target_properties(proj_name PROPERTIES
                VERSION ${PROJECT_VERSION}
                SOVERSION 1
                PUBLIC_HEADER include/proj_name/proj_name.h)

install(TARGETS proj_name
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/proj_name)
