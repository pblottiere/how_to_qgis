cmake_minimum_required(VERSION 2.8.9)

project (ex5)

set(SOURCES python/myalgo_wrap.cxx src/lib/myalgo.cpp)

include_directories("/usr/include/python2.7", "src/lib")

add_library(_myalgo SHARED ${SOURCES})
