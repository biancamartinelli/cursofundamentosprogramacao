// Faça um algoritmo que leia a idade e o sexo de uma pessoa. Ao final mostre as vagas de emprego disponíveis, conforme tabela:
// Vaga            Sexo     Idade mínimo//
// Programador     M             18    //
// DBA             M/F           20    //
// An.de Testes    F             25    //

#include <stdio.h>
#include <stdlib.h>

int main(void){
int idade;
char sexo;

printf("Digite sua idade e sexo (f/m): ");
scanf ("%d,%c", &idade, &sexo);

	if ((sexo=='m')&&(idade >=18));{
	printf("Temos vaga de programador para voce\n");
	 }
	 
if (idade >=20){
printf("Temos vaga de DBA para voce\n");

}
	if ((sexo=='f')&&(idade>=25)){
	printf("Temos vaga de analista de testes para voce\n");	
	}
}