#include <stdio.h>

typedef struct lligada{
	int valor;
	struct lligada *prox;
}lligada;


typedef lligada *LInt;

int length(LInt l){
	int c = 0;
	
	while(l != NULL){
		c ++;
		l = l->prox;
	}	
	return c;
}


