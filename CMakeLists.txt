cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(I2C_MULTIPLEXER VERSION 1.0)

add_library(multiplexerlib STATIC multiplexerLib/i2c_multiplexer.c)
target_include_directories(multiplexerlib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/multiplexerLib/include)

add_executable(multiplexer main.cpp)
target_link_libraries(multiplexer PUBLIC multiplexerlib)



