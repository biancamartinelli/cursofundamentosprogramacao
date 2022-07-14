/* Dado o vetor abaixo, transfira os valores para um novo vetor (Y), mas na ordem inversa
int x[] = {11,22,33,44,55,66,77,88,99};*/

#include <stdlib.h>
#include <stdio.h>

int main(void){
int x[]={11,22,33,44,55,66,77,88,99};
int y[9];
int ix;
int iy;	

    iy=0;
	for(ix=8; ix>=0; ix--){
	y[iy]=x[ix];
	iy++;	
	}
	  for (iy=0;iy<9; iy++){
	printf("%d\n", y[iy]);
	}	
}
