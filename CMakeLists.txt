cmake_minimum_required(VERSION 3.20)
project(Lab11_Variant6 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(LAB_PROGRAMS Part1_Lambda Part2_Functor Part3_PureFunctions
                 Part4_STL Part4_Ranges Part5_Error1 Part5_Error2
                 Part5_Error3 Part5_Error4 Part6_Sensors)
foreach(program IN LISTS LAB_PROGRAMS)
    add_executable(${program} ${program}.cpp)
endforeach()
