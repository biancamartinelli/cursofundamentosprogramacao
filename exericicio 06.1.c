//Faça um algoritmo que leia o nome e o salário de uma pessoa, ao final mostre seu novo salário baseado na tabela//
// Salário <= 1500 = 12% de aumento//
// Salário > 1500 = 10% de aumento//

#include <stdlib.h>
#include <stdio.h>

int main(void){
char nome [30];
float sal;

printf ("Qual o seu nome? ");
scanf ("%s", nome);

printf ("Qual o seu salario? ");
scanf ("%f", &sal);

	if (sal <= 1500){
	sal = sal + (sal*0.12);
	printf("O seu novo salario : %.2f", sal);

	} else {
	  sal = sal+ (sal * 0.10);
	  printf("O seu novo salario: %.2f", sal);
	}	
}