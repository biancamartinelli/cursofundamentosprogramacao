//Divisão: Crie um algortimo que mostre os números pares compreendidos entre 1 e 50//

#include <stdlib.h>
#include <stdio.h>

int main(void){
int i;

i=1;

while (i<=50){
	if ((i%2)==0){
	 printf("%d\n", i);	
	}
i= i+1;
}
}