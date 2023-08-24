#include "lista.h"

no *inserirNodos(no **lista){
	no *inicio, *pont;
	int num[9]={1,2,3,4,5,6,7,8,9},i;
	for(i=0;i<9;i++){
		if(*lista==NULL){
			pont=criarNo(num[i]);
			inicio=*lista=pont;
		}
		else{
		   pont=criarNo(num[i]);
		   (*lista)->prox=pont;

		   (*lista)=(*lista)->prox;
		}
	}
	return inicio;
}

no * inserirNodosFinal(no **lista, int conteudo){
    no *inicio, *p;

    if (*lista==NULL){
        p = criarNo(conteudo);
        inicio = *lista = p;
    } else {
        inicio = *lista;
        while ((*lista)->prox!=NULL){
            *lista = (*lista)->prox;
        }
        p = criarNo(conteudo);
        (*lista)->prox = p;

    }
    return inicio;
}

no * inserirNodosInicio(no **lista, int conteudo){
    no *inicio, *p;

    if (*lista==NULL){
        p = criarNo(conteudo);
        inicio = *lista = p;
    } else {
        inicio = *lista;
        p = criarNo(conteudo);
        p->prox = inicio;
        inicio->ant = p;
        inicio = p;
    }
    return inicio;
}
