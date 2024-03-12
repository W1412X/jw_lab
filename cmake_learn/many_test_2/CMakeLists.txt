cmake_minimum_required (VERSION 2.8)
project(test)
set(ALL_SOURCE_FILE
./func.cpp
./func.h
./main.cpp
	)
add_executable(main ${ALL_SOURCE_FILE})
