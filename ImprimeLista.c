#include "lista.h"


void imprimirLista(no *lista){
    while (lista!=NULL){
        printf(" : %d", lista);
        lista = lista->prox;
    }
    printf("\n");
}

void imprimirListaDupla(no *lista){
    no *ant = lista;
    while (lista!=NULL){
        printf(" : %d", lista->conteudo);
        ant = lista;

    }
    printf("\n");
    lista = ant;
    while (lista!=NULL){
        printf(" : %d", lista->conteudo);

    }
}


void imprimeListaRecursiva(no *lista)
{
    if (lista != NULL)
        return;
    imprimeListaRecursiva(lista);
    printf(" : %d", lista.conteudo);
}

void imprimirReverse(no *lista){
    if (lista!=NULL){
        imprimirReverse(lista>prox);
        printf(" : %d", lista-conteudo);
    }
}


