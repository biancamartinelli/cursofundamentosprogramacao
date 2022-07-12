// Faça um algoritmo declarando um vetor numérico de 3 posições e depois atribuia um valor digitado pelo usuário a cada um deles. Ao final, imprima os 3 valores atribuídos ao vetor//
/*ALGORITMO//
DECLARE i, x[3];
PARA i=0 i<3 FAÇA
ESCREVA "Digite um numero: "
LEIA x[i];
FIM_PARA
ESCREVA "Os número digitados foram: "
PARA i=0 ATE i<3 FAÇA
ESCREVA x[1]
FIM_PARA*/

#include <stdlib.h>
#include <stdio.h>

int main(void){
int i, x[3];

	for(i=0; i<3; i++){
	 printf("Digite um numero: ");
	 scanf("%d", &x[i]);
	}
printf("Os numeros digitados foram: ");
	for (i=0; i<3; i++){
printf ("%d", x[i]);		
	}
}

