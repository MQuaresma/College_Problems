#include <stdio.h>
#include <stdlib.h>

typedef struct lligada{
	int valor;
	struct lligada *prox;
}*LInt;

int removeOneOrd(LInt l, int x){
	LInt laux = l;
	
	while(l->valor != x && l != NULL){
		laux = l;
		l = l->prox;
	}
	
	if(l == NULL) return 1;
	laux->prox = l->prox;	
	free(l);
	return 0;
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
	/*l2 = l;
	while(l!=NULL){
		printf("%d\n", l->valor);	
		l=l->prox;
	}*/
	printf("\n");
	int x;
	printf("Introduza o nro a remover: ");	
	scanf("%d", &x);
	if(!removeOneOrd(l, x)){
		while(l!=NULL){
			printf("%d\n", l2->valor);	
			l=l->prox;
		}
	}
	return 0;
}

