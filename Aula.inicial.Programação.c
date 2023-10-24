#include "stdio.h"

void main(){   
     printf("Hello,World!\n");
     int idade1;
     idade1 = 20;
     printf("a idade1 e %i\n",idade1);
	 int idade2;
	 idade2 = 20;
	 printf("a idade2 e %i\n",idade2);
     int a = 17;
     printf("a e %i\n",a);
     char minhainicial = 's';
     printf("a minha inicial e %c\n",minhainicial);
     int tamanhodoInt = sizeof(int);
     printf("o int tem %i byte(s)\n",tamanhodoInt);
     
	 return 0;
     
}

//sintaxe fundamental de um programa em c
//para fechar um programa é necessário o ponto e vírgula(;)
//printf(); é como se escreve algo, e se esse algo for um texto deve estar entre parêntesis, como printf("Assim se imprime")
//Comentário é feito utilizando // ou /* etc*/ para comentários de mais de uma linha*/
//não pode salvar em cpp
// evitar usar acentos e espaços 
/*assim também se pode fazer comentários*/
// espaço em branco e linha em branco fora do () não fazem diferença
// int significa inteiro/número inteiro
//se um número executa corretamente o retorno será 0
//o retorno é zero pois é o número que significa que não existem erros
//C é case sensitive,compilado,e fortemente tipada(o tipo faz diferença,e o computador deve saber os míninos detalhes dos dados que está sendo inscritos)
/* Os tipos principais 
int  = intero : basta colocar uma sequencia de dígitos númericos sem espaços ["num",%i] %i
char = caractere :  colocar um caractere em uma aspas, seja ele acentuação,pontuação,espaço, ('o') %c
float = números com ponto flutuante:números devem ter um número,um ponto e um número ex 3.0 %f
long = números grandes
double: mais precisão em números tipo float
*/
/* Sintaxe de uma variável
 tipo nomeVar;
 tipo nomevar = valor;*/
/* não se pode usar caracteres especiais com exceção do sublinhado*/
//para expandir e comprimir o modo cheio clique em fn ctrl f11
// para imprimir uma variável
// se quero imprimir algo, devo declara-lo antes
// o \n serve para trocar a linha
//sizeof() mostra o numero de bits do que está entre parêntesis
