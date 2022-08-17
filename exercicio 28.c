//criando um "menu" com loop infinito//

#include <stdio.h>
#include <stdlib.h>


int menu(void);
int main(void){
int opcao;

	while(1==1){

		opcao = menu();
		switch(opcao){
			case 1:
				printf("Voce escolheu a opcao 01\n");
			break;
			case 2:
				printf("Voce escolheu a opcao 02\n");
			break;
			case 3:
				printf("Voce escolheu a opcao 03\n");
			break;
			default:
				printf("Digite uma opcao valida \n");
		}
	}


return 0;

}

int menu(void){
int opcao;

printf("\n========== MENU ==========\n");
printf("1- Executar o algortimo 01\n");
printf("2- Executar o algortimo 02\n");
printf("3- Executar o algortimo 03\n\n");
printf("Digite uma opcao: ");
 scanf("%d", &opcao);
	return opcao;
}