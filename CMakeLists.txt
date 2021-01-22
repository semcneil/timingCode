cmake_minimum_required(VERSION 3.0.0)
project(timeTest VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(chronoWall chronoWall.cpp)
add_executable(clockCPU clockCPUTime.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
