/* Faça um algoritmo que preencha uma matriz 4x3 com números inteiros e ao final mostre o maior número lido*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
int m[4][3];
int i,j;
int maior =0;

	for(i=0; i<4;i++){
	 for (j=0; j<3; j++){
	  printf("Digite um numero: ");
	  scanf("%d", &m[i][j]);
	 }
	}
		for(i=0; i<4; i++){
		 for(j=0; j<3;j++){
		  if(m[i][j] > maior){
		   maior = m[i][j];
		  }
		 }
		}
	printf("O maior numero armazenado na matriz: %d\n", maior);
}