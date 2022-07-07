// Faça um algoritmo que leia o salário de uma pessoa e ao final mostre o seu novo salário baseado na tebala abaixo//
// ate 1000 15% de aumento//
// entre 1001,00 e 1500,00 10% e aumento//
// acima de 1500,00 8% de aumento//

#include <stdlib.h>
#include <stdio.h>

int main(void){
float sal;

printf("Digite seu salario: ");
scanf("%f", &sal);

	if(sal<=1000){
	sal = (sal*1.15);
	
	}else{
		if((sal>1000)&&(sal<=1500)){
		sal =(sal*1.10);
		
		}else{
		  sal =(sal*1.08);
		}
	}
printf("O seu novo salario : %.2f\n",sal);
	
}