cmake_minimum_required(VERSION 3.23)
project(Battleship C)

set(CMAKE_C_STANDARD 11)

add_executable(Battleship
        main.c
        AnsiAffichage.h
        AnsiAffichage.c
        Navires.h
        Navires.c Plateau.c Plateau.h)

