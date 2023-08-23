#include "lista.h"
#include <stdlib.h>
#include <stdio.h>

no * removerk(no** lista, int k){
no *aux, *ant;

aux = ant = *lista;

for(int i=0; i<k-1 ;i++) {
      ant = aux;
	aux = aux->prox;
   }


if (aux == *lista) {
        *lista = aux->prox;
} else {
        ant->prox = aux->prox;
}
	free(aux);
	return *lista;
}

