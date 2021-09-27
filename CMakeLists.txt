cmake_minimum_required(VERSION 3.21)
project(TPFisica)

set(CMAKE_C_FLAGS "-Wall -pedantic -std=c99 -lm")

add_executable(TPFisica Formulas.h)
