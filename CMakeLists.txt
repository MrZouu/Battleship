cmake_minimum_required(VERSION 3.23)
project(Battleship C)

set(CMAKE_C_STANDARD 11)

add_executable(Battleship main.c AnsiAffichage.c AnsiAffichage.h)
