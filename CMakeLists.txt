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
add_executable(strutture strutture/strutture1.c
        strutture/strutture1.c)
add_executable(sequenze_metodi
        sequenze/Sequenze2.c)
add_executable(liste1 liste/liste1.c)
add_executable(listePlay liste/listeplay.c
        liste/listeplay.c)
add_executable(liste2 liste/liste2.c)
add_executable(DoubleLinked liste/DoubleLinked.c
        liste/DoubleLinked.c)
add_executable(listeDoppie liste/listeDoppie.c)
add_executable(insertionsorting oridnamento/insertion_sorting.c
        oridnamento/insertion_sorting.c)
add_executable(alberi1 alberiBR/alberi1.c)
add_executable(quicksorting oridnamento/quick_sorting.c
        oridnamento/quick_sorting.c)
add_executable(coeffBin programmazioneDinamica/coefficenteBinomiale.c
        programmazioneDinamica/coefficenteBinomiale.c)
add_executable(fibonacci programmazioneDinamica/fibonacciAlg.c)
