#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main()
{
    no *lista1, *lista2, *lista3;
    char op;
    int valor, quantidade;

    lista1 = NULL;

    lista1 = inserirNodos(&lista1);//e04
    lista1 = inserirNodosFinal(&lista1,7);
    lista1 = inserirNodosInicio(&lista1,9);
    imprimirLista(lista1);


    return 0;
}
