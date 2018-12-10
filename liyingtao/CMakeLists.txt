cmake_minimum_required(VERSION 3.12)
project(OpenGL)

set(CMAKE_CXX_STANDARD 11)

add_executable(OpenGL main.cpp model.cpp model.h point.cpp point.h surface.cpp surface.h vector.cpp vector.h camera.cpp camera.h)
target_link_libraries(OpenGL GL GLU glut)