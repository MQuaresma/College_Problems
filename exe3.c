#include <stdio.h>

typedef struct lligada{
	int valor;
	struct lligada *prox;
}lligada;
	
typedef lligada *LInt;

void imprimeL(LInt l){

	while(l!=NULL){
		printf("%d\n", l->valor);	
		l=l->prox;
	}		
}
