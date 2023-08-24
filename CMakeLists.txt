cmake_minimum_required(VERSION 3.26)
project(Lista_1_EDA C)

set(CMAKE_C_STANDARD 11)

add_executable(Lista_1_EDA main.c
        RemoveNodos.c
        InsereNodos.c
        ImprimeLista.c
        CriaNodo.c
        RemoverK.c)
