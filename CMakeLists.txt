cmake_minimum_required(VERSION 3.00)
project(FileHandling LANGUAGES CXX) # Put C,C++ or anything in place of XX 
set(CMAKE_CXX_STANDARD 20)    # Specify standard of language in place of STANDARD  
file(GLOB MAIN
    *.cpp
    )
    add_executable(FileHandling ${MAIN})
