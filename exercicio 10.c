//usando o REPITA faça um algoritmo que solicite um número, calcule e mostre a sua tabuada ex: número 5: 5x1=5, 5x2= 10... 5x10=50//

#include <stdio.h>
#include <stdlib.h>


int main(){
int i,nd,resultado;
i=1;

printf("Digite um numero: ");
scanf("%d", &nd);

	do{
	
	  resultado =nd*i;
	 printf("%dx%d = %d\n",nd,i,resultado);
	 i=i+1;	
	} while (i<=10);
}