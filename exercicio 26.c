#include <stdio.h>
#include <stdlib.h>

void matriz_pares(void);
int soma_vetor();
void menu(void);

int main(void){
int soma = 0;
int opcao;


  menu();
  scanf("%d", &opcao);
  
  if (opcao == 1){
  	soma = soma_vetor();
	printf("A soma dos elementos do vetor x %d\n", soma);
  	}else {
  	 matriz_pares();
}
  return 0;
  
}

void matriz_pares(void){
	int i, j;
	int m[4][4];
	
	 for(i=0; i<4; i++){
   	  for (j=0; j<4; j++){
   	   printf("Digite um numero: ");
  	    scanf("%d", &m[i][j]);	
	   }
   }
      for(i=0; i<4; i++){
   	   for (j=0; j<4; j++){
   	    if((m[i][j] % 2) == 0)
   	     printf("E par: %d\n", m[i][j]);
  }
}
  }

int soma_vetor(){
	int i, soma = 0;
	int x[5];
	for(i=0; i<5; i++){
	 printf("Digite um numero: ");
  	 scanf("%d", &x[i]);
}

	for(i=0; i<5; i++){
	soma = soma + x[i];	
	}
	return soma;
}



void menu(void){
  printf("========== MENU ==========\n");
  printf("1- Preencher um vetor x[5] e mostrar a soma dos elementos\n");
   printf("2- Preencher uma matriz 4x4 e mostrar todos os numeros pares\n");
   printf("\nDigite a opcao: ");	
} 