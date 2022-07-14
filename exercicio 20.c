// Faça um algoritmo que preencha uma matriz 2x3 com números inteiros e ao final, imprima os valores atribuídos à matriz//

#include <stdlib.h>
#include <stdio.h>

int main(void){
int m[2][3];
int l,c;

l=0;
c=0;

	for(l=0; l<2; l++){
	 for(c=0; c<3; c++){
	  printf("Digite um numero: ");
	  scanf("%d", &m[l][c]);
	 }	
	}	
   		for (l=0; l<2; l++){
   		 for (c=0; c<3;c++){
   		  printf(">>[%d] [%d] -> %d\n",l,c,m[l][c]);
			}	
		   }
}