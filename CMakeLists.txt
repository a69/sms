cmake_minimum_required(VERSION 3.6)
project(sms)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories("/usr/include/gammu")

set(SOURCE_FILES test.c rtu-smsd.c rtu-smsd.h)
add_executable(sms ${SOURCE_FILES} rtu-smsd.c rtu-smsd.h)
target_link_libraries(sms Gammu gsmsd)