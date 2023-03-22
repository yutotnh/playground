project(cmake_skeleton)

cmake_minimum_required(VERSION 3.0.2 FATAL_ERROR)

file(GLOB sources *.c *.cpp)

foreach(source ${sources})
  message(${source})
  get_filename_component(bin_name ${source} NAME_WE)
  add_executable(${bin_name} ${source})
endforeach()
