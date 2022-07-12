//Faça um algortimo que leia 10 números e ao final informe quantos números lidos foram maior que 25.//

#include <stdlib.h>
#include <stdio.h>

int main(void){
int i;
int v[10];
int qtd_maior=0;

	for(i=0; i<10; i++){
	 printf("Digite o %do numero: ", i+1);
	 scanf("%d", &v[i]);	
	}

	for (i=0; i<10; i++){
	if (v[i]>25){
	 qtd_maior = qtd_maior+1;
	}
  }

printf("Foram lidos %d numeros maior que 25", qtd_maior);	
	
}