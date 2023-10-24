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


/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>ENDEREÇO DE MEMÓRIA<<<<<<<<<<<<<<<<<
endereço de memória é a localização de onde uma variável é armazenada em um 
computador. quando atribuimos um valor a uma variável, armazenamo-os no endereço de
memória.ele aparece em forma hexadecimal.
ex:   int exemplo = 2;
      print ("%p",&exemplo);
      =======================PONTEIRO=================
      ponteiro é uma ferramenta que armazena o valor da
	  variável como puramente valor. Tem formatação %p
	  para ser impresso.
	  &EXEMPLO É UM PONTEIRO NESSE CASO
^^^^^^^^^^^^^^^^^^^^^^^PONTEIRO^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
UMA VARIÁVEL PONTEIRO É CRIADA ATRAVÉS DO OPERADOR *
      int exemplo = 2;
      print ("%p",&exemplo); : imprime o endereço através do endereço
      print("%p",exempo): imprime o endereço através do ponteiro
      o tipo do ponteiro deve combinar com o tipo de variável que aponta para
      ~~~~~~~~~~~~~~DEREFERENCIA~~~~~~~~~~~~~~
      Obtenho o valor da variável que é apontada pelo ponteiro através do 
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
