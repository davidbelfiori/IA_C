cmake_minimum_required(VERSION 3.26)
project(Introduzione_C)

set(CMAKE_C_STANDARD 11)
add_executable(new_target mcd/mcd.c
        mcd/mcd.h
        mcd/main.c
        array/array1.c
        array/array1.c)

add_executable(malloc puntatori/malloc.c)
add_executable(puntatori1 puntatori/puntatori1.c)
add_executable(puntatori2 puntatori/puntatori2.c)
add_executable(raddopia puntatori/puntatori_raddoppia.c)
add_executable(punt_mcd puntatori/puntatori_mcd.c)
add_executable(struttureintr strutture/strutture_intro.cpp
        strutture/struttureWho.c)
add_executable(who strutture/struttureWho.c)
