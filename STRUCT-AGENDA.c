#include <stdio.h>

struct Contato {
    char nome[20];
    int telefone;
};

int main() {
    struct Contato contato;
    int i;
 for (i=0;i<20;i++){
 
    printf("Insira seu nome: ");
    scanf("%s", contato.nome);

    printf("Insira seu numero de telefone: ");
    scanf("%d", &contato.telefone);

  printf("Nome: %s e Telefone: %d\n", contato.nome, contato.telefone);
}  

    return 0;
}


/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>ENDERE�O DE MEM�RIA<<<<<<<<<<<<<<<<<
endere�o de mem�ria � a localiza��o de onde uma vari�vel � armazenada em um 
computador. quando atribuimos um valor a uma vari�vel, armazenamo-os no endere�o de
mem�ria.ele aparece em forma hexadecimal.
ex:   int exemplo = 2;
      print ("%p",&exemplo);
      =======================PONTEIRO=================
      ponteiro � uma ferramenta que armazena o valor da
	  vari�vel como puramente valor. Tem formata��o %p
	  para ser impresso.
	  &EXEMPLO � UM PONTEIRO NESSE CASO
^^^^^^^^^^^^^^^^^^^^^^^PONTEIRO^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
UMA VARI�VEL PONTEIRO � CRIADA ATRAV�S DO OPERADOR *
      int exemplo = 2;
      print ("%p",&exemplo); : imprime o endere�o atrav�s do endere�o
      print("%p",exempo): imprime o endere�o atrav�s do ponteiro
      o tipo do ponteiro deve combinar com o tipo de vari�vel que aponta para
      ~~~~~~~~~~~~~~DEREFERENCIA~~~~~~~~~~~~~~
      Obtenho o valor da vari�vel que � apontada pelo ponteiro atrav�s do 
      sinal *
      printf("%d\n", *exemplo);: imprime o valor em exemplo, nesse
      caso imprime 2
      DOIS TIPOS DE DECLARAR PONTEIRO 
      int* exemplo;
      int *exemplo;
==========================PONTEIROS PARA ACESSAR ARRAYS=============================
                 int myNumbers[4] = {25, 50, 75, 100};
                 int *ptr = myNumbers;
                 int i;

                 for (i = 0; i < 4; i++) {
                printf("%d\n", *(ptr + i));
                } 
--------------------------MUDANDO O VALOR DE ELEMENTOS COM PONTEIROS---------------
int myNumbers[4] = {25, 50, 75, 100};


*myNumbers = 13;


*(myNumbers +1) = 17;


printf("%d\n", *myNumbers);


printf("%d\n", *(myNumbers + 1));


*/
