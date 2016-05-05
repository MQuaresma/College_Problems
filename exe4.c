#include <stdlib.h>
#include<stdio.h>

typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;



LInt reverseL(LInt l){
	LInt laux = NULL, laux1;

	while(l != NULL){
		laux1 = l->prox;
		l->prox = laux;
		laux = l;
		l = laux1; 
	}
	l = laux;
	return l;
}

int main(){
	LInt l, l2;
	l = (LInt) malloc(sizeof(struct lligada));
	l->valor = 3;
	l->prox= (LInt) malloc(sizeof(struct lligada));
	l->prox->valor= 2;
	l->prox->prox = (LInt) malloc(sizeof(struct lligada));
	l->prox->prox->valor=1;
	l->prox->prox->prox= NULL; 
	l2 = l;
	while(l!=NULL){
		printf("%d,", l->valor);	
		l=l->prox;
	}
	printf("\n");
	l2 = reverseL(l2);
	while(l2!=NULL){
		printf("%d,", l2->valor);	
		l2=l2->prox;
	}
	return 0;
}
