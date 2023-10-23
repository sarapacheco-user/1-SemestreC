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
 variáveis úteis para acessar o endereço de memória de alguma variável 
 PODEMOS DECLARAR O PONTEIRO DA VARIÁVEL POR 
 int* myNum;
     ou
 int *myNum;
 
 int myAge = 43;     // declaração da variável
int* ptr = &myAge;  //  declaração do ponteiro

// Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
printf("%p\n", ptr);

// Dereference: Output the value of myAge with the pointer (43)
printf("%d\n", *ptr);
 
 
 print ("%p %i",&numero) ASSIM ACESSO O ENDEREÇO DE MEMÓRIA EM CÓDIGO HEXADECIMAL
*/
	
	
	
	
	
	
	
       

