#include <stdio.h>

// Obs: por favor, n�o alterem o c�digo
int main(void) {
  int numero = 10;
  int *ponteiro = &numero;
// ponteiro aponta para a vari�vel n�mero 
  printf("numero \n"); // imprime numero
  printf(" 1) %d \n", numero);// imprime 1) 10 no formato inteiro
  printf(" 2) %d \n", &numero); //imprime 2) endere�o do numero no formato inteiro
  //printf(" 3) %d \n", *numero); //ERRO
  printf(" 4) %p \n", numero); // imprime a vari�vel n�mero como ponteiro // USO ERRADO
  printf(" 5) %p \n", &numero); // imprime o endere�o do n�mero em forma de ponteiro
  //printf(" 6) %p \n", *numero); // ERRO

  printf("ponteiro \n"); // imprime ponteiro
  printf(" 1) %d \n", ponteiro);// tenta pegar o conte�do  ponteiro em forma de int 
  printf(" 2) %d \n", &ponteiro);//imprime o endere�o do ponteiro e imprimir em int 
  printf(" 3) %d \n", *ponteiro); //imprime 10
  printf(" 4) %p \n", ponteiro);// imprime o endere�o de mem�ria
  printf(" 5) %p \n", &ponteiro);//imprime endere�o de mem�ria do ponteiro em formato de ponteiro
  printf(" 6) %p \n", *ponteiro);//imprime o endere�o de mem�ria com o ponteiro
  return 0;
}


/* LEMBRE -SE 
ENDERE�O------------------------ 
&
PONTEIRO------------------------
%p formato de ponteiro
o conte�do da vari�vel pontero � o endere�o da vari�vel. neste caso a vari�vel em quest�o � NUMERO
  * =  conte�do 




*/
// Ponteiro � uma vari�vel de endere�o int 
