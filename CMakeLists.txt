cmake_minimum_required(VERSION 3.9)
project(tarea1)

file(GLOB SOURCES "src/*", "src/clases/*")

add_executable(tarea1 ${SOURCES})