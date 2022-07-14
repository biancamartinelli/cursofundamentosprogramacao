/*Uma matriz pode ser inicializada na declaração
int x [2] [2] = {65, 76, 87, 78};
Outras possíveis formas:
int m [][2] = {1,2,2,4,3,6,4,8,5,10};
int m [3][10] = {23, 45, 67};*/

#include <stdlib.h>
#include <stdio.h>

int main(void){
int m[2][2][2];
int l,c,p;

l=0;
c=0;

	for(l=0; l<2; l++){
	 for(c=0; c<2; c++){
	  for (p=0; p<2; p++){
	  
	  printf("Digite um numero: ");
	  scanf("%d", &m[l][c][p]);
      }
	 }
	}
	for(l=0;l<2;l++){
	 for(c=0;c<2;c++){
	  for (p=0;p<2; p++){
	  	printf(">>[%d][%d][%d] -> %d\n",l,c,p,m[l][c][p]);
	  }
	 }
	}	
}

