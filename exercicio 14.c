/* Faça um algoritmo declarando um vetor numérico de 3 posições e depois atribua um valor digitado pelo usuário a cada um deles. Ao final, imprima os 3 valores atribuídos ao vetor
ALGORITMO
DECLARE x[3] numérico
ESCREVA "Digite um número*
LEIA x[0]
ESCREVA *Digite outro número*
LEIA x[1]
ESCREVA *Digite mais um número*
LEIAMx[2]
ESCREVA "Os números lidos foram: "x[0]","x[1]","x[2]"
FIM_ALGORITMO*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
int i, x[3];
	for (i=0; i<3;i++){
	 printf("Digite um numero: ");
	 scanf("%d", &x[i]);	
	}
printf("Os numeros digitados foram: ");

	for (i=0; i<3; i++){
	 printf("%d", x[i]);
	}
	
}