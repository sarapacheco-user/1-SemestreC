#include <stdio.h>

// Obs: por favor, não alterem o código
int main(void) {
  int numero = 10;
  int *ponteiro = &numero;
// ponteiro aponta para a variável número 
  printf("numero \n"); // imprime numero
  printf(" 1) %d \n", numero);// imprime 1) 10 no formato inteiro
  printf(" 2) %d \n", &numero); //imprime 2) endereço do numero no formato inteiro
  //printf(" 3) %d \n", *numero); //ERRO
  printf(" 4) %p \n", numero); // imprime a variável número como ponteiro // USO ERRADO
  printf(" 5) %p \n", &numero); // imprime o endereço do número em forma de ponteiro
  //printf(" 6) %p \n", *numero); // ERRO

  printf("ponteiro \n"); // imprime ponteiro
  printf(" 1) %d \n", ponteiro);// tenta pegar o conteúdo  ponteiro em forma de int 
  printf(" 2) %d \n", &ponteiro);//imprime o endereço do ponteiro e imprimir em int 
  printf(" 3) %d \n", *ponteiro); //imprime 10
  printf(" 4) %p \n", ponteiro);// imprime o endereço de memória
  printf(" 5) %p \n", &ponteiro);//imprime endereço de memória do ponteiro em formato de ponteiro
  printf(" 6) %p \n", *ponteiro);//imprime o endereço de memória com o ponteiro
  return 0;
}


/* LEMBRE -SE 
ENDEREÇO------------------------ 
&
PONTEIRO------------------------
%p formato de ponteiro
o conteúdo da variável pontero é o endereço da variável. neste caso a variável em questão é NUMERO
  * =  conteúdo 




*/
// Ponteiro é uma variável de endereço int 
