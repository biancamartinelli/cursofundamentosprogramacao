#include <stdlib.h>
#include <stdio.h>

int main(void){
int x;
float y;

char a;
char b[40];

printf("Digite um numero inteiro: ");
	scanf("%d", &x);
printf("A minha variavel X possui o valor %d\n", x);

printf("Digite um numero real: ");
	scanf("%f", &y);
printf("A minha variavel Y possui valor: %.2f\n", y);

printf("Digite um caractere: ");
	scanf(" %c", &a);
printf("A minha variavel A possui valor: %c\n", a);

printf("Digite um nome: ");
	scanf("%s", &b);
printf("A minha variavel B possui o valor: %s\n", b);	
	


}