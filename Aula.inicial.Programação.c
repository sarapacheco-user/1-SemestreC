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
//para fechar um programa � necess�rio o ponto e v�rgula(;)
//printf(); � como se escreve algo, e se esse algo for um texto deve estar entre par�ntesis, como printf("Assim se imprime")
//Coment�rio � feito utilizando // ou /* etc*/ para coment�rios de mais de uma linha*/
//n�o pode salvar em cpp
// evitar usar acentos e espa�os 
/*assim tamb�m se pode fazer coment�rios*/
// espa�o em branco e linha em branco fora do () n�o fazem diferen�a
// int significa inteiro/n�mero inteiro
//se um n�mero executa corretamente o retorno ser� 0
//o retorno � zero pois � o n�mero que significa que n�o existem erros
//C � case sensitive,compilado,e fortemente tipada(o tipo faz diferen�a,e o computador deve saber os m�ninos detalhes dos dados que est� sendo inscritos)
/* Os tipos principais 
int  = intero : basta colocar uma sequencia de d�gitos n�mericos sem espa�os ["num",%i] %i
char = caractere :  colocar um caractere em uma aspas, seja ele acentua��o,pontua��o,espa�o, ('o') %c
float = n�meros com ponto flutuante:n�meros devem ter um n�mero,um ponto e um n�mero ex 3.0 %f
long = n�meros grandes
double: mais precis�o em n�meros tipo float
*/
/* Sintaxe de uma vari�vel
 tipo nomeVar;
 tipo nomevar = valor;*/
/* n�o se pode usar caracteres especiais com exce��o do sublinhado*/
//para expandir e comprimir o modo cheio clique em fn ctrl f11
// para imprimir uma vari�vel
// se quero imprimir algo, devo declara-lo antes
// o \n serve para trocar a linha
//sizeof() mostra o numero de bits do que est� entre par�ntesis
