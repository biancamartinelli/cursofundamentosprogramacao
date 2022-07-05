//Faça um algoritmo que leia o nome de uma pessoa, leia a idade, leia o salário e ao final mostre na tela o nome, idade e mostre também o salário com aumento de 30% //


#include <stdio.h>
#include <stdlib.h>

int main(){
char nome[30];
int idade;
float sal, aumento, sf;

 printf("Qual o seu nome?\n");
	scanf("%s", &nome);

printf ("Qual a sua idade?\n");
	scanf("%d", &idade);

printf("Qual o seu salario?\n");
	scanf("%f" , &sal);

aumento = (sal * 0.3);
sf = sal + aumento;
	

printf("seu aumento de 30%% (%.2f)\n", aumento);
printf("%s sua idade : %d e seu novo salario: %.2f\n" , nome, idade, sf);

}
