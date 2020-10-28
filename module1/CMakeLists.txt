cmake_minimum_required(VERSION 3.5)

add_library(module1 SHARED src/file00.c src/file01.c)

set_target_properties(module1 PROPERTIES
		VERSION ${PROJECT_VERSION}
		SOVERSION 1
		PUBLIC_HEADER include/proj_name/module1.h)

target_include_directories(module1 PRIVATE include)
target_include_directories(module1 PRIVATE src)

install(TARGETS module1
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/proj_name)
