cmake_minimum_required(VERSION 3.14)
project(ModernPerson)

set(CMAKE_CXX_STANDARD 17)

add_executable(ModernPerson main.cpp ModernPerson.h ModernPerson.cpp Tweeter.h Tweeter.cpp)