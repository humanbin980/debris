cmake_minimum_required(VERSION 3.30.3)
project(calculator)
# set(SRC add.cpp sub.cpp)
# aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
set(EXECUTABLE_OUTPUT_PATH /home/humanbin/project/exe)
# set(CMAKE_CXX_STANDARD 11)
# link_libraries(calc)# STATIC before app
link_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib)
add_executable(app ${SRC})
target_link_libraries(app calc) # SHARED after app
# target_link_libraries() #
# set(LIBRARY_OUTPUT_PATH /home/humanbin/project/lib)
# add_library(calc SHARED ${SRC})
