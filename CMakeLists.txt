cmake_minimum_required(VERSION 3.27)
project(tigergraph_udf)

set(CMAKE_CXX_STANDARD 17)
#target_include_directories(test ./gle)
#include_directories(cereal/include)
#add_library()
include_directories(.)
#find_package(OpenSSL REQUIRED)
#find_package(Boost REQUIRED)
add_executable(tigergraph_udf main.cpp
        ExprFunctions.hpp
        ExprUtil.hpp)
#target_include_directories(tigergraph_udf PUBLIC "gle/")
