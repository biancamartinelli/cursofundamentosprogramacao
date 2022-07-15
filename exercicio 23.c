//Faça um algoritmo que preencha uma matriz 3x3 com números inteiros e ao final mostre os números que estão na diagonal principal além da soma deles.//

#include <stdio.h>
#include <stdlib.h>

int main(void){
int m[3][3];
int i,j;
int soma=0;

	for(i=0; i<3; i++){
	 for(j=0; j<3; j++){
	  printf("Digite um numero: ");
	  scanf("%d", &m[i][j]);
	  }
	 }
printf("Os elementos da diagonal princial sao:\n");
 for(i=0;i<3;i++){
  for(j=0; j<3;j++){
   if(i==j){
   	printf("%d\n",m[i][j]);
   	soma=soma + m[i][j];
   }
  }
 }
 
 printf("A soma dos elementos da diagonal principal:%d", soma);
}
