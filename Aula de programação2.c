//quando colocar (%.2f) ao invés de (%f) significaria uma maior precisão decimal.Nesse caso seriam 2 casas decimais.[arredondamento e precisão decimal em float]
// sempre iniciar um arquivo com seu nome completo e sua RA/matrícula
#include "stdio.h"
#include "locale.h"
#include "math.h"//o locale h é importante, bem como o setlocale
int main(){
setlocale(LC_ALL,"Portuguese");
 int var1 =5;
 float var2 =4;
 printf("A multiplicacao e %i*%.2f=%.2f\n",var1,var2,var1*var2);
 printf("A divisao e %i/%.2f=%.2f\n",var1,var2,var1/var2);
 printf("A adicao e %i+%.2f=%.2f\n",var1,var2,var1+var2);
 printf("A subtracao e %i-%.2f=%.2f\n",var1,var2,var1-var2);
 print("pow(%i,%i)",var1,var2,);

 //estamos usando apenas int com int
	
	
	
	
	
	
	
	
	
return 0;
}
/* operadores + - * / %(resto)
ou seja num1 operador num2
só dá resto em inteiro */

