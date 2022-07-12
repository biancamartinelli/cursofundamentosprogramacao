// Dado o vetor abaixo, calcule a média aritmética dos valores nele declarado//

#include <stdio.h>
#include <stdlib.h>

int main(void){
int i;
float acumulador =0;
float resultado;

float x[]= {34,45,87,78,32};
	for (i=0; i<5; i++){
	acumulador = acumulador +x[1];
	}	
 resultado = acumulador/5;
 printf ("A media aritmetica : %.2f\n", resultado);	
}