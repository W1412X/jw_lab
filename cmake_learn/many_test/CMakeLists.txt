cmake_minimum_required (VERSION 2.8)
project(test)
aux_source_directory(. ALL_SOURCE_FILE)
add_executable(main ${ALL_SOURCE_FILE})
