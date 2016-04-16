#include <stdlib.h>
#include <stdio.h>

typedef struct lligada{
	int valor;
	struct lligada *prox;
}lligada;

typedef lligada *LInt;


void freeL(LInt l){
	LInt laux;	
		
	while(l != NULL){
		laux = l->prox;	
		free(l);
		l= laux;
	}	
}
