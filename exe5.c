#include <stdlib.h>
#include <stdio.h>

typedef struct lligada{
	int valor;
	struct lligada *prox;
} *LInt;


void insertOrd(LInt l, int x){
	LInt lN = NULL, laux;

	if(l == NULL){
		l = (LInt) malloc(sizeof(lligada));
		l->valor = x;
		l->prox = NULL;
		return ;
	}


	laux = l->prox;	
	while(l != NULL){
		if(x < l.valor){
			lN = (LInt)malloc(sizeof(lligada));
			lN->valor = x;
			lN->prox = l;
			break;
		}
		laux = l;
		else l=l->prox;	
	}	
	
	if(lN == NULL){
		lN = (LInt)malloc(sizeof(lligada));
		lN->valor = x;
		lN->prox = NULL;
		l = lN;
	}
}
