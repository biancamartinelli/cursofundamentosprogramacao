#include <stdio.h>
#include <stdlib.h>

float algoritmo_salario(float salario);
void algoritmo_soma(void);
void menu(void);

int main(void) {
int opcao;
float salario, novo_salario;
    
    menu();
    scanf("%d", &opcao);
    
    if (opcao == 1){
    algoritmo_soma();
      
}else{
    printf("\n\n ---------- ALGORITMO E SOMA ---------\n\n");
    printf("Digite seu salario: ");
      scanf("%f", &salario);
    printf("Seu novo salario :  %.2f\n", algoritmo_salario(salario));
  }
  
    return 0;
}

float algoritmo_salario(float salario){
  return salario * 1.04;
}

void algoritmo_soma(void){
  int n1, n2;
  printf("\n\n========== ALGORITMO DE SOMA ==========\n\n");
 printf("Digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("Digite o segundo numero: ");
  scanf("%d", &n2);
printf("A soma dos dois números digitados é: %d\n", n1 +n2);
}

void menu(void){
    printf("============= MENU ==============\n");
    printf("1) Ler 2 numeros e a mostrar a sua soma\n");
    printf("2) Ler um salario e mostrar um aumento de 4%%\n");
    printf("\n Digite sua opcao : ");

  }