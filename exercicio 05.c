//Faça um algoritmo que leia dois números e informa qual o maior valor//

#include <stdlib.h>
#include <stdio.h>

int main(void){
int A,B;

printf("Digite um numero: ");
scanf("%d", &A);

printf("Digite outro numero: ");
scanf("%d", &B);

if(A>B){
	printf ("O maior numero e: %d\n", A);
}else{
	printf("O maior numero: %d\n", B);
}

}