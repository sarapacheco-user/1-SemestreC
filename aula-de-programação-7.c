#include <stdio.h>
int soma(int *num1,int num2){
	int resultado = *num1+num2;
	*num1=50;
	return resultado;
}
int main(void){
    int numero = 10; 
	int resultado_soma = soma(&numero, 3);
	printf(" numero %i e resultado_soma=%i\n",numero, resultado_soma);	
	return 0;
}

/* -------------------------PONTEIROS--------------------------
 vari�veis �teis para acessar o endere�o de mem�ria de alguma vari�vel 
 PODEMOS DECLARAR O PONTEIRO DA VARI�VEL POR 
 int* myNum;
     ou
 int *myNum;
 
 int myAge = 43;     // declara��o da vari�vel
int* ptr = &myAge;  //  declara��o do ponteiro

// Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);

// Dereference: Output the value of myAge with the pointer (43)
printf("%d\n", *ptr);
 
 
 print ("%p %i",&numero) ASSIM ACESSO O ENDERE�O DE MEM�RIA EM C�DIGO HEXADECIMAL
*/
	
	
	
	
	
	
	
       

