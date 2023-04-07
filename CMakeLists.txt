cmake_minimum_required(VERSION 3.24)

project(dnsresolver)

include_directories(boost)

set(CMAKE_CXX_STANDARD 17)

add_executable(dnsresolver Source.cpp)

target_link_libraries(dnsresolver -Lboost/stage/lib)