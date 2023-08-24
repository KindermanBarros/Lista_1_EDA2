#include "lista.h"


no * removerNodos(no **lista, int conteudo){
    no *ant, *aux, *inicio;
    inicio = aux = ant = *lista;
    if (aux->conteudo == conteudo) {
        aux = aux->prox;
        aux->ant = NULL;
        ant->prox = NULL;
        free(ant);
        inicio = aux;
        printf("Elemento %d removido",conteudo);
    } else {
        while (aux->conteudo != conteudo && aux->prox !=NULL){
            ant = aux;

        }
        if (aux->conteudo == conteudo){
            if (aux->prox !=NULL){
 
                aux->prox->ant = ant;
                aux->prox = NULL;
                aux->ant = NULL;
                free(aux);
                printf("Elemento %d removido",conteudo);
            } else if (aux->prox == NULL) {
                ant->prox = NULL;
                aux->ant = NULL;
                free(aux);
                printf("Elemento %d removido",conteudo);
            }
        } else {
                printf("Elemento Inexistente!!");
        }
    }
    return inicio;
}