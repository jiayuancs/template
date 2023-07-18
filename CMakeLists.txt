cmake_minimum_required(VERSION 3.22)

project(cpp-project-template "CXX")

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_BUILD_TYPE Release)

# third party libraries
set(THIRD_PARTY_DIR ./third_party/color)

# source files
aux_source_directory(./src SRC)

# include directories
include_directories(./include ${THIRD_PARTY_DIR}/include)

# executable output path
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
add_executable(${PROJECT_NAME} ${SRC})

# install binary
install(TARGETS ${PROJECT_NAME} DESTINATION bin)
