// Exercício sobre ponteiros \\

#include <stdio.h>
#include <stdlib.h>

int main(void){
int a;
int *p;

  a = 35;
  
  p = &a;
  *p = 20;

printf("Conteudo de a: %d\n", a);
printf("O endereco de memoria de A : %x\n", &a);
printf("conteudo de p: %x\n", p);
printf("O conteudo de A atraves de P: %d", *p); 
  
  return 0;

  }