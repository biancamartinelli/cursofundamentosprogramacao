//Faça um algortimo que leia 10 números e ao final mostre o triplo soa números lidos//

#include <stdlib.h>
#include <stdio.>

int main(void){
int i;
int v[10];

	for (i=0; i<10; i++){
	 printf("Digite o %do numero: ", i+1);
	 scanf("%d", &v[i]);
	}
	
	for (i=0; i<10; i++){
	 printf("O triplo de %d\n", v[i]*3);
	}
}