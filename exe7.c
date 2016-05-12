#include <stdio.h>
#include <stdlib.h>

typedef struct lligada{
	int valor;
	struct lligada *prox;
} *LInt;


void merge(LInt *r, LInt a, LInt b){

	while(a != NULL && b!= NULL){
		if(a->valor > b->valor){
			*r=(LInt) malloc(sizeof(struct lligada));
			*r->valor = b->valor;
			b = b->prox;
		}
		else{
			*r=(LInt) malloc(sizeof(struct lligada));
			*r->valor = a->valor;
			a = a->prox;
		}
		*r = *r->prox;
	}
	if( a == NULL){
		while(b != NULL){
			r=(LInt) malloc(sizeof(struct lligada));
			r->valor = b->valor;
			b = b->prox;
			*r = *r->prox;
		}
		*r = b;
	}
	else{
		while(a != NULL){
			*r=(LInt) malloc(sizeof(struct lligada));
			*r->valor = a->valor;
			a = a->prox;
			*r = *r->prox;
		}
		*r = a;
	}
}
