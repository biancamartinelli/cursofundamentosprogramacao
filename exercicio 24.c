//Faça um algoritmo que preencha uma matriz 2x5 com números inteiros e ao final preencha um vetor x[5] com soma de cada uma das da matriz.//

#include <stdlib.h>
#include <stdio.h>

int main(void){
int m[2][5];
int x[5];
int i,j;

	for(i=0;i<2;i++){
	 for(j=0;j<5;j++){
	  printf("Digite um numero: ");
	  scanf("%d", &m[i][j]);
	 }
	}	
	  for(i=0;i<5;i++){
	  	x[i]=m[0][i]+m[1][i];
	  }
printf("A soma das colunas da mtriz sao: \n");
	for(i=0;i<5;i++){
printf("%d", x[i]);
	}
}